#include <stdio.h>
#include <string.h>

int main(){

    char st[] = "Firoz";
    char s1[56] = "Gyawat";
    char s2[56] = "Brother";

    //printf("%d", strlen(st));
    
    char target[30];
    strcpy(target, st);
    printf("%s %s", st, target);

    strcat(s1, s2);
    printf("%s %s", s1, s2);

    
    return 0;
}