#include <stdio.h>
#include <string.h>

// Function to prompt the user to enter their name
void promptName(char *pName) {
    printf("Insert name: ");
    scanf("%s", pName);
}

// Function to display a greeting message
void displayGreeting(char *pName) {
    printf("Hello %s!\n", pName);
}

int main() {
    char name[50];  // Buffer to store the user's name
    printf("Program starting.\n");

    promptName(name);       // Ask for the user's name
    displayGreeting(name);  // Greet the user with their name

    printf("Program ending.\n");
    return 0;
}
