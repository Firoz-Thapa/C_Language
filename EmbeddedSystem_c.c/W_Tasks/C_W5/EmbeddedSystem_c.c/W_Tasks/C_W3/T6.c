#include <stdio.h>

int main() {
    char filename[100];
    char line[256];
    FILE *file;
    
    printf("Program starting.\n");
    printf("This program can read a file.\n");
    printf("Insert filename: ");
    scanf("%99s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error opening file \"%s\".\n", filename);
        return 1;
    }
    
    printf("#### START \"%s\" ####\n", filename);
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    printf("#### END \"%s\" ####\n", filename);
    
    fclose(file);
    printf("Program ending.\n");
    return 0;
}
