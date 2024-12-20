#include <stdio.h>

int main() {
    int begin, end, checkPoint;

    printf("Program starting.\n\n");

    // Input the starting, stopping, and inspection points
    printf("Insert starting point: ");
    scanf("%d", &begin);
    printf("Insert stopping point: ");
    scanf("%d", &end);
    printf("Insert inspection point: ");
    scanf("%d", &checkPoint);

    int isValid = 1;  // Flag to check if the inputs are valid

    // Validate if the starting point is less than the stopping point
    if (begin >= end) {
        printf("\nStarting point value must be less than the stopping point value.");
        isValid = 0;
    }

    // Validate if the inspection point is within the valid range
    if (checkPoint < begin || checkPoint > end) {
        printf("\nInspection value must be within the range of start and stop.\n");
        isValid = 0;
    }

    if (isValid) {
        printf("\nFirst loop - inspection with break:\n");
        int isFirst = 1;  // Flag to manage spacing between numbers

        // Loop until the stopping point, break if the inspection point is reached
        for (int i = begin; i < end; i++) {
            if (i == checkPoint) {
                break;
            }
            if (!isFirst) {
                printf(" ");  // Print a space before subsequent numbers
            }
            printf("%d", i);
            isFirst = 0;
        }
        printf("\n");

        printf("Second loop - inspection with continue:\n");
        isFirst = 1;  // Reset the flag for the second loop

        // Loop until the stopping point, skip the inspection point using continue
        for (int i = begin; i < end; i++) {
            if (i == checkPoint) {
                continue;
            }
            if (!isFirst) {
                printf(" ");  // Print a space before subsequent numbers
            }
            printf("%d", i);
            isFirst = 0;
        }
        printf("\n");
    }

    // Ending the program
    printf("\nProgram ending.\n");
    return 0;
}
