#include <stdio.h>
#include <string.h>

int main() {
    char name[100];  // Variable to store the user's name
    int choice;      // Variable to store the user's menu choice

    // Starting the program
    printf("Program starting.\n");

    // Display the introduction message
    printf("This is a program with simple menu, where you can choose which operation the program performs.\n");

    // Prompt the user to enter their name
    printf("Before the menu, please insert your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  // Remove the trailing newline character from the input

    // Display the menu options
    printf("\nOptions:\n");
    printf("1 - Print welcome message\n");
    printf("0 - Exit\n");

    // Prompt the user to enter their choice
    printf("Your choice: ");
    scanf("%d", &choice);

    // Handle the user's choice using a switch statement
    switch (choice) {
        case 1:
            // Print a welcome message with the user's name
            printf("Welcome %s!\n", name);
            break;
        case 0:
            // Print exiting message
            printf("Exiting...\n");
            break;
        default:
            // Handle an unknown option
            printf("Unknown option.\n");
    }

    // Ending the program
    printf("\nProgram ending.\n");

    return 0;
}
