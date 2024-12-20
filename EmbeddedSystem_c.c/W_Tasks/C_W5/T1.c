#include <stdio.h>
#include <string.h>
#include "T1.h"

// Function to get and clean the input string
void getInput(char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    fgets(buffer, size, stdin);
    
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';  // Remove the newline character
    }
}

int main(void) {
    struct s_Person person;

    printf("Program starting.\n");

    // Get the first name from the user
    getInput("Insert first name: ", person.aFirstName, sizeof(person.aFirstName));

    // Get the last name from the user
    getInput("Insert last name: ", person.aLastName, sizeof(person.aLastName));

    // Greet the user
    printf("Hello %s %s!\n", person.aFirstName, person.aLastName);

    printf("Program ending.\n");
    return 0;
}
