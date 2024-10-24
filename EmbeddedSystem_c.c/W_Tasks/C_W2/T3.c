#include <stdio.h>
#include <string.h>

int main() {
    char word[101];  
    int wordCount = 0, charCount = 0;

    printf("Program starting.\n");
    printf("\n");


    while (1) {
        printf("Insert word (empty stops): ");
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = 0; 


        if (strlen(word) == 0) {
            break;
        }

        wordCount++;
        charCount += strlen(word);  
    }


    printf("\nYou inserted:\n- %d words\n- %d characters\n", wordCount, charCount);
    printf("\n");
    printf("Program ending.\n");

    return 0;
}
