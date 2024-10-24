#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *ptr;
    
    // Allocate memory for 5 integers using calloc
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation failed
    }

    // Input values for the first array
    printf("Enter 5 values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print the first array
    printf("The first array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d \n", ptr[i]);
    }

    // Free the previously allocated memory before reusing the pointer
    free(ptr);

    // Now reallocate memory for 10 integers
    n = 10;
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation failed
    }

    // Input values for the second array
    printf("Enter 10 values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print the second array
    printf("The second array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d \n", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
