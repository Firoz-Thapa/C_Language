#include <stdio.h>

int main() {
    char firstName[100];  // Buffer to store the first name
    char lastName[100];   // Buffer to store the last name
    char filename[100];   // Buffer to store the filename
    FILE *file;           // File pointer

    printf("Program starting.\n");

    // Prompt the user to enter the first name
    printf("Insert first name: ");
    scanf("%99s", firstName);

    // Prompt the user to enter the last name
    printf("Insert last name: ");
    scanf("%99s", lastName);

    // Prompt the user to enter the filename
    printf("Insert filename: ");
    scanf("%99s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file \"%s\".\n", filename);
        return 1;  // Exit with an error code
    }

    // Write the first and last names to the file
    fprintf(file, "%s\n%s\n", firstName, lastName);
    fclose(file);  // Close the file

    printf("Program ending.\n");
    return 0;
}
