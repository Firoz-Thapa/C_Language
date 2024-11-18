#include <stdio.h>  

int main() {
    
    float multiplicand, multiplier, product;

    
    printf("Program starting.\n");
    printf("Insert multiplicant: ");
    scanf("%f", &multiplicand);
    printf("Insert multiplier: ");
    scanf("%f", &multiplier);

    product = multiplicand * multiplier;

    printf("%.2f * %.2f = %.2f\n", multiplicand, multiplier, product);
    printf("Program ending.\n");

    return 0; 
}
