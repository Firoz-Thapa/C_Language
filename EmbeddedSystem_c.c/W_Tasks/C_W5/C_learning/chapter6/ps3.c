#include <stdio.h>

void change_to_thirty_times(int*);

void change_to_thirty_times(int*a){
    *a = *a *30;
}

int main(){
    int  a = 45;
    printf("The value of a is %d \n", a);
    change_to_thirty_times(&a);
    printf("The value of a is %d \n", a);
    return 0;
}