#include <stdio.h>

int main() {
    int start, stop, inspection;

    printf("Program starting.\n\n");


    printf("Insert starting point: ");
    scanf("%d", &start);
    printf("Insert stopping point: ");
    scanf("%d", &stop);
    printf("Insert inspection point: ");
    scanf("%d", &inspection);

    int valid = 1; 

 
    if (start >= stop) {
        printf("\nStarting point value must be less than the stopping point value.");
        valid = 0;
    }


    if (inspection < start || inspection > stop) {
        printf("\nInspection value must be within the range of start and stop.\n");
        valid = 0;
    }


    if (valid) {
        printf("\nFirst loop - inspection with break:\n");
        int firstPrint = 1; 
        for (int i = start; i < stop; i++) { 
            if (i == inspection) {
                break;
            }
            if (!firstPrint) {
                printf(" ");  
            }
            printf("%d", i);
            firstPrint = 0; 
        }
        printf("\n");

        printf("Second loop - inspection with continue:\n");
        firstPrint = 1;  
        for (int i = start; i < stop; i++) {  
            if (i == inspection) {
                continue;
            }
            if (!firstPrint) {
                printf(" ");  
            }
            printf("%d", i);
            firstPrint = 0;
        }
        printf("\n");
    }

 
    printf("\nProgram ending.\n");
    return 0;
}
