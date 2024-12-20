#include <stdio.h>

int main() {
    char filename[100];  // Buffer to store the filename
    char line[256];      // Buffer to store each line from the file
    FILE *file;          // File pointer

    printf("Program starting.\n");
    printf("This program can read a file.\n");
    printf("Insert filename: ");
    scanf("%99s", filename);  // Read the filename from the user

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file \"%s\".\n", filename);
        return 1;  // Exit with an error code
    }

    printf("#### START \"%s\" ####\n", filename);

    // Read and print each line from the file
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    printf("#### END \"%s\" ####\n", filename);

    fclose(file);  // Close the file
    printf("Program ending.\n");
    return 0;
}
