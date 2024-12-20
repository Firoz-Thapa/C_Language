#include <stdio.h>
#include <string.h>

// Function to input a word from the user
void inputWord(char *word) {
    printf("Insert word: ");
    scanf("%s", word);
    printf("\n");
}

// Function to display the current word
void displayWord(char *word) {
    printf("Current word - \"%s\"\n\n", word);
}

// Function to display the word in reverse
void displayWordReverse(char *word) {
    int len = strlen(word);  // Get the length of the word
    printf("Word reversed - \"");
    for (int i = len - 1; i >= 0; i--) {
        putchar(word[i]);
    }
    printf("\"\n\n");
}

int main() {
    char word[100] = "";  // Buffer to store the word
    int choice;           // Variable for user choice

    printf("Program starting.\n");

    do {
        // Display menu options
        printf("Options:\n");
        printf("1 - Insert word\n");
        printf("2 - Show current word\n");
        printf("3 - Show current word in reverse\n");
        printf("0 - Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        // Handle user choice
        switch (choice) {
            case 1:
                inputWord(word);
                break;
            case 2:
                displayWord(word);
                break;
            case 3:
                displayWordReverse(word);
                break;
            case 0:
                printf("Exiting program.\n\n");
                break;
            default:
                printf("Unknown option! Try again.\n\n");
                break;
        }
    } while (choice != 0);

    printf("Program ending.\n");
    return 0;
}
