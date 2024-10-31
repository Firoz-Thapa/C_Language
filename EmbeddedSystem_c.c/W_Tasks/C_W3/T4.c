#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void showCount(int count) {
    printf("Current count - %d\n\n", count);  
}

void increaseCount(int *count) {
    (*count)++;
    printf("Count increased!\n\n");  
}

void resetCount(int *count) {
    *count = 0;
    printf("Cleared count!\n\n");  
}

// Helper function to check if input is a valid integer
int isValidInteger(char *input) {
    char *end;
    strtol(input, &end, 10);  // Try to convert to integer

    // Check if entire input was valid integer (no trailing chars)
    return *end == '\n' || *end == '\0';  
}

int main() {
    int count = 0;
    int choice;
    char input[50];  

    printf("Program starting.\n");

    do {
        printf("Options:\n");
        printf("1 - Show count\n");
        printf("2 - Increase count\n");
        printf("3 - Reset count\n");
        printf("0 - Exit\n");
        printf("Your choice: ");
        fgets(input, sizeof(input), stdin);  

        // Validate if input is an integer
        if (!isValidInteger(input) || sscanf(input, "%d", &choice) != 1) {
            printf("Unknown option!\n\n");  
            continue;
        }

        // Process valid integer options
        switch (choice) {
            case 1:
                showCount(count);
                break;
            case 2:
                increaseCount(&count);
                break;
            case 3:
                resetCount(&count);
                break;
            case 0:
                printf("Exiting program.\n\n"); 
                break;
            default:
                printf("Unknown option!\n\n"); 
                break;
        }
    } while (choice != 0);

    printf("Program ending.\n");
    return 0;
}
