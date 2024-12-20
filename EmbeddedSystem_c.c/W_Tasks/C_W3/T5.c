#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 10
#define MAX_WORDS 5

int main() {
    char word[100];
    int word_count = 0;
    int char_count = 0;

    printf("Program starting.\n");

    while (1) {
        // Removed the space between "word" and "(empty stops)"
        printf("Insert word(empty stops): ");
        fgets(word, sizeof(word), stdin);

        if (word[0] == '\n') {
            printf("Empty word inserted.\n\n");
            break;
        }

        word[strcspn(word, "\n")] = 0;  

        if (strlen(word) > MAX_WORD_LENGTH) {
            printf("Word is too long! Max word length is %d.\n", MAX_WORD_LENGTH);
            printf("Word was ignored. Try again.\n");  
            continue;
        }

        char_count += strlen(word);
        word_count++;

        if (word_count == MAX_WORDS) {
            printf("Maximum amount of words inserted.\n\n");
            break;
        }
    }

    float avg_length = (word_count > 0) ? (float)char_count / word_count : 0;
    printf("Analysis:\n");
    printf("- %d Words\n", word_count);
    printf("- %d Characters\n", char_count);
    printf("- %.2f Average word length\n", avg_length);

    printf("Program ending.\n");
    return 0;
}
