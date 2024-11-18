#include <stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        //no_of_stars = (2*i+1)
        for (int j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}