#include <stdio.h>

int main() {
    int first, second, sum;

    printf("Program starting.\n");
    printf("Insert two integers.\n");
    printf("Insert first integer: ");
    scanf("%d", &first);
    printf("Insert second integer: ");
    scanf("%d", &second);

    printf("Comparing inserted integers.\n");
    if (first > second) {
        printf("First integer is greater.\n");
    } else if (second > first) {
        printf("Second integer is greater.\n");
    } else {
        printf("Integers are the same.\n");
    }


    printf("\n");

    printf("Adding integers together\n");
    sum = first + second;
    printf("%d + %d = %d\n", first, second, sum);


    printf("\n");

    printf("Checking the parity of the sum...\n");
    if (sum % 2 == 0) {
        printf("Sum is even.\n");
    } else {
        printf("Sum is odd.\n");
    }

    printf("Program ending.\n");
    return 0;
}
