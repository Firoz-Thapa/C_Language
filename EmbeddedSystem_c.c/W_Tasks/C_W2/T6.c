#include <stdio.h>

int main() {
    int number;    // Stores the user's input integer
    int option;    // Stores the user's menu choice

    printf("Program starting.\n");
    printf("Testing decision structures.\n");

    // Prompt the user to enter an integer
    printf("Insert an integer: ");
    scanf("%d", &number);

    // Display menu options
    printf("Options:\n");
    printf("1 - In one multi-branched decision\n");
    printf("2 - In multiple independent if-statements\n");
    printf("0 - Exit\n");
    printf("Your choice: ");
    scanf("%d", &option);

    // Process user's choice using a switch statement
    switch (option) {
        case 1: {
            printf("Using one multi-branched decision structure.\n");
            
            // Multi-branched decision structure
            if (number >= 400) {
                number += 44;
            } else if (number >= 200) {
                number += 22;
            } else if (number >= 100) {
                number += 11;
            }
            
            printf("Result is %d\n", number);
            break;
        }
        case 2: {
            printf("Using multiple independent if-statements structure.\n");

            // Multiple independent if-statements
            if (number >= 400) {
                number += 44;
            }
            if (number >= 200) {
                number += 22;
            }
            if (number >= 100) {
                number += 11;
            }

            printf("Result is %d\n", number);
            break;
        }
        case 0:
            // Exit option
            printf("Exiting...\n");
            break;
        default:
            // Handle unknown options
            printf("Unknown option.\n");
    }

    // Program termination message
    printf("\nProgram ending.\n"); 
    return 0;
}
