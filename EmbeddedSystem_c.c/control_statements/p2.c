#include <stdio.h>

int main(){
    // 1. Initialize
    int start = 2;
    int stop = 10;
    int i;
    printf("Program starting.\n");
    // 2. Operate
    printf("Starting for-loop.\n");
    for (i = start; i<stop; i++){
        // if first iteration print no space otherwise print space
        printf(" %d", i);
    }
    printf("\n");
    // 3. cleanup
    printf("Program ending.\n");
    return 0;
}