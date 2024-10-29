#include <stdio.h>
#include <string.h>

#define CONTENT_LEN 30
#define FILENAME_LEN 10

int main(void)
{
    // 1. Initialize
    char filename[FILENAME_LEN];
    FILE *filehandle; // FILE -> Filehandle type in C
    char content[CONTENT_LEN];

    // 2. Operate
    printf("Program starting.\n");
    printf("Insert filename: ");
    fgets(filename, FILENAME_LEN, stdin);
    filename[strcspn(filename, "\n")] = '\0';
    printf("Enter text (max %d): ", CONTENT_LEN - 1);
    fgets(content, CONTENT_LEN, stdin);
    content[strlen(content) - 1] = '\0';
    filehandle = fopen(filename, "w");

    //filehandle = fopen(filename, "w");


    //if (filehandle == NULL)
    //{
    //    perror("Error opening file");
    //    return 1;
    //}

    fprintf(filehandle, "%s", content);
    //printf("Filename is %s\n", filename);

    // 3. Cleanup
    fclose(filehandle);
    printf("Program ending.\n");
    return 0;
}

// gcc T1.c -o a.exe -Wall -std=c99 -pedantic && ./a.exe