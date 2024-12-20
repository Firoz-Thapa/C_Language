#include <stdio.h>

int main() {
    int numOne, numTwo, total;  // Variables to store two integers and their sum

    // Program start message
    printf("Program starting.\n");

    // Prompt the user to input two integers
    printf("Insert two integers.\n");
    printf("Insert first integer: ");
    scanf("%d", &numOne);
    printf("Insert second integer: ");
    scanf("%d", &numTwo);

    // Compare the two integers
    printf("Comparing inserted integers.\n");
    if (numOne > numTwo) {
        printf("First integer is greater.\n");
    } else if (numTwo > numOne) {
        printf("Second integer is greater.\n");
    } else {
        printf("Integers are the same.\n");
    }

    printf("\n");

    // Add the two integers and display the sum
    printf("Adding integers together\n");
    total = numOne + numTwo;
    printf("%d + %d = %d\n", numOne, numTwo, total);

    printf("\n");

    // Check the parity (even or odd) of the sum
    printf("Checking the parity of the sum...\n");
    if (total % 2 == 0) {
        printf("Sum is even.\n");
    } else {
        printf("Sum is odd.\n");
    }

    // Program termination message
    printf("Program ending.\n");
    return 0;
}
