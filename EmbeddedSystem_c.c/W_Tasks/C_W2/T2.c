#include <stdio.h>

int main() {
    int startPoint, stopPoint;  // Variables to store the starting and stopping points

    // Program start message
    printf("Program starting.\n");
    printf("\n");

    // Prompt the user to input starting and stopping points
    printf("Insert starting point: ");
    scanf("%d", &startPoint);
    printf("Insert stopping point: ");
    scanf("%d", &stopPoint);

    printf("\nStarting for-loop:\n");

    // Check if the starting point is less than the stopping point
    if (startPoint < stopPoint) {
        // Loop from starting point to stopping point (excluding stopPoint)
        for (int i = startPoint; i < stopPoint; i++) {
            if (i != stopPoint - 1) {
                printf("%d ", i);
            } else {
                printf("%d", i);
                printf("\n");
                printf("\n");
            }
        }
    } else {
        // Error message if starting point is not less than stopping point
        printf("Couldn't run loop. Starting point must be less than stopping point.\n");
    }

    // Program termination message
    printf("Program ending.\n");

    return 0;
}
