#include <stdio.h>

int main(){
    int a = 6;
    printf("Enter a: ");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("You entered 1");
        case 2:
            printf("You entered 2");
        case 3:
            printf("You entered 3");
        case 4:
            printf("You entered 4");
    }
    
    
    return 0;
}