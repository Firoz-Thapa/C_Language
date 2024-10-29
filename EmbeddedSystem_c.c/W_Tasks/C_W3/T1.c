#include <stdio.h>
#include <string.h>

void askName(char *pName) {
    printf("Insert name: ");
    scanf("%s", pName);
}

void greetUser(char *pName) {
    printf("Hello %s!\n", pName);
}

int main() {
    char name[50];
    printf("Program starting.\n");

    askName(name);
    greetUser(name);

    printf("Program ending.\n");
    return 0;
}
