#include <stdio.h>

int main() {
    char char1, char2;
    int input;

    printf("Enter two characters consecutively with spaces or newlines in between: ");

   
    while ((input = getchar()) == ' ' || input == '\n');

   
    char1 = (char)input;

    
    while ((input = getchar()) == ' ' || input == '\n');

   
    char2 = (char)input;

    
    printf("Character 1: %c\n", char1);
    printf("Character 2: %c\n", char2);

    return 0;
}
