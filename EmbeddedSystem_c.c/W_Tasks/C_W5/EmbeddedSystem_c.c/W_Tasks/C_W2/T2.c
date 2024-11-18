#include <stdio.h>

int main() {
    int start, stop;

    printf("Program starting.\n");
    printf("\n");
    printf("Insert starting point: ");
    scanf("%d", &start);
    printf("Insert stopping point: ");
    scanf("%d", &stop);

    printf("\nStarting for-loop:\n");

    if (start < stop) {
        for (int i = start; i < stop; i++) {
            if (i != stop - 1) {
                printf("%d ", i);
            } else {
                printf("%d", i);
                
                printf("\n");
            printf("\n");
            }
          
        }

    } else {
        printf("Couldn't run loop. Starting point must be less than stopping point.\n");
    }

    printf("Program ending.\n");

    return 0;
}
