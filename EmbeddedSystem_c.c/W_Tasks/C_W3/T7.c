#include <stdio.h>

int main() {
    char firstName[100];
    char lastName[100];
    char filename[100];
    FILE *file;
    
    printf("Program starting.\n");
    
    printf("Insert first name: ");
    scanf("%99s", firstName);
    
    printf("Insert last name: ");
    scanf("%99s", lastName);
    
    printf("Insert filename: ");
    scanf("%99s", filename);
    
    file = fopen(filename, "w");
    
    if (file == NULL) {
        printf("Error opening file \"%s\".\n", filename);
        return 1;
    }
    
    fprintf(file, "%s\n%s\n", firstName, lastName);
    fclose(file);
    
    printf("Program ending.\n");
    return 0;
}
