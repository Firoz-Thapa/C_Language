#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int num1 = 2; 
    int num2 = 3;  
    
    printf("Program starting.\n");
    printf("Sum of %d and %d is %d.\n", num1, num2, add(num1, num2));
    printf("Program ending.\n");
    
    return 0;
}
