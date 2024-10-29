#include <stdio.h>
#include <string.h>

void insertWord(char *word) {
    printf("Insert word: ");
    scanf("%s", word);
    printf("\n");
}

void showWord(char *word) {
    printf("Current word - \"%s\"\n\n", word);  
}

void showWordReverse(char *word) {
    int len = strlen(word);
    printf("Word reversed - \"");
    for (int i = len - 1; i >= 0; i--) {
        putchar(word[i]);
    }
    printf("\"\n\n"); 
}

int main() {
    char word[100] = "";
    int choice;

    printf("Program starting.\n");

    do {
        printf("Options:\n");
        printf("1 - Insert word\n");
        printf("2 - Show current word\n");
        printf("3 - Show current word in reverse\n");
        printf("0 - Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertWord(word);
                break;
            case 2:
                showWord(word);
                break;
            case 3:
                showWordReverse(word);
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
