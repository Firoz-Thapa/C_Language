#include <stdio.h>

int main(){
    // 1. Initialize
    int num1, num2, sum1;
    printf("Program starting.\n");
    // 2. operate
    printf("Insert two integers.\n");
    printf("insert first integer: ");
    scanf("%d", &num1);
    printf("Insert second integer: ");
    scanf("%d", &num2);
    // Comparision with conditional statement
    printf("Comparing inserted integers.\n");
    if (num1>num2) {
        printf("First integer is greater.\n");
    }
    else if (num2>num1){
        printf("Second integer is greater.\n");
    }
    else{
        printf("Integers are same.\n");
    }
    // sum integers
    printf("\n");
    printf("Adding integers together.\n");
    sum1 = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum1);
    printf("\n");
    //3. cleanup
    printf("Program ending.\n");
    return 0;
}