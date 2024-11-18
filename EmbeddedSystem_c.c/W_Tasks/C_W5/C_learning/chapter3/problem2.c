#include <stdio.h>

int main(){
    int mark1, mark2, mark3;
   
    printf("Enter mark1: \n");
    scanf("%d", &mark1);
    printf("Enter mark2: \n");
    scanf("%d", &mark2);
    printf("Enter mark3: \n");
    scanf("%d", &mark3);
    printf("The mark are %d %d and %d\n", mark1, mark2, mark3);

    if(mark1<33 || mark2<33 || mark3<33){
        printf("You are failed due to less mark in individial subject(s)");
    }
    else if((mark1 + mark2 + mark3)/3 <40){
        printf("You are failed due to less percentage.");
    }
    else{
        printf("You are passed.");
    }
    return 0;
}