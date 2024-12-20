#include <stdio.h>
#include <string.h>

int main() {
    char input[101];     // Array to store the input word (up to 100 characters + null terminator)
    int totalWords = 0;  // Counter for the number of words entered
    int totalChars = 0;  // Counter for the total number of characters entered

    printf("Program starting.\n");
    printf("\n");

    // Infinite loop to keep asking for words until an empty input is entered
    while (1) {
        printf("Insert word (empty stops): ");
        fgets(input, sizeof(input), stdin); // Read a line of input
        input[strcspn(input, "\n")] = 0;    // Remove the trailing newline character

        // Check if the input is empty to break the loop
        if (strlen(input) == 0) {
            break;
        }

        totalWords++;            // Increment the word count
        totalChars += strlen(input); // Add the length of the current word to the character count
    }

    // Display the final counts
    printf("\nYou inserted:\n- %d words\n- %d characters\n", totalWords, totalChars);
    printf("\n");
    printf("Program ending.\n");

    return 0;
}
