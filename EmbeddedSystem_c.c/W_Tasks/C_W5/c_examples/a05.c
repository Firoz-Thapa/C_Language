#include <stdio.h>
#include "ask_choice.h"


int main(void){
    //1. Initialize 
    int new_value = -1;
    IntList intlist;
    
    
    //2. Operate
    printf("Program Starting.\n");
    while(new_value != 0) {

        askChoice(&new_value);
        printf("Your choice was: %d\n", new_value);
        //collect integer into a list
        listAppend(&intlist, new_value);

    }

    //Show list of integers
    showListDetails(&intList);
    //3. CleanUp
    //clean up the mess
    listClear(&intList);
    printf("Program ending.\n");
    
}

// gcc a05.c -o a05.out --std=c99 -Wall -pedantic
// gcc a05.c -o a05.out --std=c99 -Wall -pedantic && ./a05.out
// gcc a005.c ask_choice.c input.c -0 a05.out --std=c99 -Wall -pedantic && ./a05.out