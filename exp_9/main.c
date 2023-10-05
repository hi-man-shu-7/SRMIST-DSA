#include <stdio.h>
#include "stack.h"


typedef struct {
    int n;          
    char source;    
    char auxiliary; 
    char target;   
} HanoiState;


void towerOfHanoi(int n, char source, char auxiliary, char target) {
   
    Stack *stateStack = createStack(2 * n, sizeof(HanoiState)); 

    
    HanoiState initialState = {n, source, auxiliary, target};
    push(stateStack, &initialState);

    while (!isEmpty(stateStack)) {
        
        HanoiState currentState;
        pop(stateStack, &currentState);

        if (currentState.n == 1) {
            
            printf("Move disk 1 from %c to %c\n", currentState.source, currentState.target);
        } else {
           
            HanoiState nextState1 = {currentState.n - 1, currentState.auxiliary, currentState.source, currentState.target};
            HanoiState nextState2 = {1, currentState.source, currentState.auxiliary, currentState.target};
            HanoiState nextState3 = {currentState.n - 1, currentState.source, currentState.target, currentState.auxiliary};

            push(stateStack, &nextState3);
            push(stateStack, &nextState2);
            push(stateStack, &nextState1);
        }
    }

   
    destroyStack(stateStack);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    
    printf("Tower of Hanoi Solution:\n");
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
