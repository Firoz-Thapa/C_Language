#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int word_count = 0;
    int char_count = 0;

    printf("Program starting.\n");

    while (1) {
        printf("Insert word(empty stops): ");
        fgets(word, sizeof(word), stdin);
        
        if (word[0] == '\n') break;

        word[strcspn(word, "\n")] = 0;  
        char_count += strlen(word);
        word_count++;
    }

    float avg_length = (word_count > 0) ? (float)char_count / word_count : 0;
    printf("- %d Words\n", word_count);
    printf("- %d Characters\n", char_count);
    printf("- %.2f Average word length\n", avg_length);

    printf("Program ending.\n");
    return 0;
}
