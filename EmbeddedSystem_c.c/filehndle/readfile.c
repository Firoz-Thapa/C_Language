#include <stdio.h>
#include <string.h>

#define CONTENT_LEN 30
#define FILENAME_LEN 10

int main(){
    // 1. Initialize
    char filename[FILENAME_LEN];
    FILE *filehandle; // FILE -> Filehandle type in C
    char content[CONTENT_LEN];
    //2. operate
    printf("Program starting.\n");
    printf("Insert filename: ");
    fgets(filename, FILENAME_LEN, stdin);
    filename[strlen(filename) - 1] = '\0';
    filehandle = fopen(filename, "r");
    printf("#### File \"%s\" ####\n", filename);
    while (fgets(content, CONTENT_LEN, filehandle) != NULL){
        printf("%s", content);
    }
    printf("#### File \"%s\" ####\n", filename);
    //3. cleanup
    printf("Program ending.\n");
    return 0;
}