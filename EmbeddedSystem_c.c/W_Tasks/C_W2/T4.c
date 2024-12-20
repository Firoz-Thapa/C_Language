#include <stdio.h>
#include <string.h>

int main() {
    char firstWord[100], secondWord[100], character;  // Variables to store two words and a character
    int containsChar = 0;  // Flag to check if the character is found in the first word

    // Starting the program
    printf("Program starting.\n");
    printf("String comparisons\n");

    // Input the first word
    printf("Insert first word: ");
    scanf("%s", firstWord);

    // Input a character to search for in the first word
    printf("Insert a character: ");
    scanf(" %c", &character);  // The space before %c ignores any leftover newline character

    // Check if the character is present in the first word
    for (int i = 0; i < strlen(firstWord); i++) {
        if (firstWord[i] == character) {
            containsChar = 1;  // Set the flag to true if character is found
            break;             // Exit the loop as soon as the character is found
        }
    }

    // Output whether the character was found in the first word
    if (containsChar) {
        printf("Word \"%s\" contains character \"%c\"\n", firstWord, character);
    } else {
        printf("Word \"%s\" doesn't contain character \"%c\"\n", firstWord, character);
    }

    // Input the second word
    printf("Insert second word: ");
    scanf("%s", secondWord);

    // Compare the two words alphabetically
    if (strcmp(firstWord, secondWord) < 0) {
        // First word comes before the second word
        printf("The first word \"%s\" is before the second word \"%s\" alphabetically.\n", firstWord, secondWord);
    } else if (strcmp(firstWord, secondWord) > 0) {
        // Second word comes before the first word
        printf("The second word \"%s\" is before the first word \"%s\" alphabetically.\n", secondWord, firstWord);
    } else {
        // The words are the same
        printf("Both inserted words are the same alphabetically, \"%s\"", firstWord);
    }

    // Ending the program
    printf("Program ending.\n");

    return 0;
}
