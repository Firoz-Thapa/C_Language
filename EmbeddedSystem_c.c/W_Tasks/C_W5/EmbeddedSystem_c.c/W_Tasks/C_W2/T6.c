#include <stdio.h>

int main() {
    int value;
    int choice;

    printf("Program starting.\n");
    printf("Testing decision structures.\n");
    printf("Insert an integer: ");
    scanf("%d", &value);

    printf("Options:\n1 - In one multi-branched decision\n2 - In multiple independent if-statements\n0 - Exit\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printf("Using one multi-branched decision structure.\n");
            if (value >= 400) {
                value += 44;
            } else if (value >= 200) {
                value += 22;
            } else if (value >= 100) {
                value += 11;
            }
            printf("Result is %d\n", value);
            break;
        }
        case 2: {
            // Adjusted this printf to match the expected output
            printf("Using multiple independent if-statements structure.\n");
            if (value >= 400) {
                value += 44;
            }
            if (value >= 200) {
                value += 22;
            }
            if (value >= 100) {
                value += 11;
            }
            printf("Result is %d\n", value);
            break;
        }
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Unknown option.\n");
    }

    printf("\nProgram ending.\n"); 
    return 0;
}
