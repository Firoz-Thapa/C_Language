#include <stdio.h>
#include <string.h>

int main() {
    char firstWord[100], secondWord[100], character;
    int containsChar = 0;

   
    printf("Program starting.\n");
    printf("String comparisons\n");

 
    printf("Insert first word: ");
    scanf("%s", firstWord);


    printf("Insert a character: ");
    scanf(" %c", &character);  

   
    for (int i = 0; i < strlen(firstWord); i++) {
        if (firstWord[i] == character) {
            containsChar = 1;
            break;
        }
    }

 
    if (containsChar) {
        printf("Word \"%s\" contains character \"%c\"\n", firstWord, character);
    } else {
        printf("Word \"%s\" doesn't contain character \"%c\"\n", firstWord, character);
    }


    printf("Insert second word: ");
    scanf("%s", secondWord);

    if (strcmp(firstWord, secondWord) < 0) {
        printf("The first word \"%s\" is before the second word \"%s\" alphabetically.\n", firstWord, secondWord);
    } else if (strcmp(firstWord, secondWord) > 0) {
        printf("The second word \"%s\" is before the first word \"%s\" alphabetically.\n", secondWord, firstWord);
    } else {
        printf("Both inserted words are the same alphabetically, \"%s\"", firstWord);
    }


    printf("Program ending.\n");

    return 0;
}
