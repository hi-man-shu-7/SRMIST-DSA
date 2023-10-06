#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[1024]; // Buffer to store input strings
    char str1[512], str2[512], separator;

    while (1) {
        printf("Enter the first string: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%511[^\n]", str1); // Read the first string (up to 511 characters)

        printf("Enter a character between the strings: ");
        separator = getchar(); // Read a character as a separator
        while (getchar() != '\n'); // Consume the newline character

        printf("Enter the second string: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%511[^\n]", str2); // Read the second string (up to 511 characters)

        printf("First String: %s\n", str1);
        printf("Separator: %c\n", separator);
        printf("Second String: %s\n", str2);

        printf("Do you want to repeat? (y/n): ");
        char choice = getchar();
        while (getchar() != '\n'); // Consume the newline character

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}
