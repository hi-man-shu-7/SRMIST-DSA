/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "stack.h"

int main() {
    Stack* stack = createStack();
    
    push(stack, 5);
    push(stack, 50);
    push(stack, 40);
    
    printf("Top element: %d\n", peek(stack));

    while (!isEmpty(stack)) {
        printf("%d ", pop(stack));
    }
    
    destroyStack(stack);
    return 0;
}