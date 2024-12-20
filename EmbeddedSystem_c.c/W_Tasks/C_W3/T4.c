#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to display the current count
void displayCount(int count) {
    printf("Current count - %d\n\n", count);
}

// Function to increment the count
void incrementCount(int *count) {
    (*count)++;
    printf("Count increased!\n\n");
}

// Function to reset the count to zero
void clearCount(int *count) {
    *count = 0;
    printf("Cleared count!\n\n");
}

// Function to validate if the input is an integer
int isValidInteger(char *input) {
    char *end;
    strtol(input, &end, 10);
    return *end == '\n' || *end == '\0';
}

int main() {
    int count = 0;       // Counter variable
    int choice;          // User choice
    char input[50];      // Buffer for input

    printf("Program starting.\n");

    do {
        // Display menu options
        printf("Options:\n");
        printf("1 - Show count\n");
        printf("2 - Increase count\n");
        printf("3 - Reset count\n");
        printf("0 - Exit\n");
        printf("Your choice: ");
        fgets(input, sizeof(input), stdin);

        if (!isValidInteger(input) || sscanf(input, "%d", &choice) != 1) {
            printf("Unknown option!\n\n");
            continue;
        }

        // Perform action based on user choice
        switch (choice) {
            case 1:
                displayCount(count);
                break;
            case 2:
                incrementCount(&count);
                break;
            case 3:
                clearCount(&count);
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
