#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int choice;

    printf("Program starting.\n");
    printf("This is a program with simple menu, where you can choose which operation the program performs.\n");

    printf("Before the menu, please insert your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("\nOptions:\n");
    printf("1 - Print welcome message\n");
    printf("0 - Exit\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Welcome %s!\n", name);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Unknown option.\n");
    }

    printf("\nProgram ending.\n");
    return 0;
}
