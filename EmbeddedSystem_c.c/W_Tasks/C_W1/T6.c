#include <stdio.h>      
#include <string.h>     

int main() {
    char fullName[29];
    printf("Program starting.\n");
    printf("Insert full name(max. 28 chars): ");

    fgets(fullName, sizeof(fullName), stdin);  
    size_t length = strlen(fullName);           

    if (length > 0 && fullName[length - 1] == '\n') {
        fullName[length - 1] = '\0';         
    }

    printf("Your name is \"%s\".\n", fullName);
    printf("Program ending.\n");

    return 0; 
}
