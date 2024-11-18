#include <stdio.h>  

int main() {
    
    float minuend, subtrahend, difference;
    printf("Program starting.\n");
    printf("Insert minuend and subtrahend separated by space: ");
    scanf("%f %f", &minuend, &subtrahend);  
    difference = minuend - subtrahend;
    printf("Difference is %.2f - %.2f = %.2f\n", minuend, subtrahend, difference);
    printf("Program ending.\n");
    return 0;  
}
