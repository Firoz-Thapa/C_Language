#include <stdio.h>  
int main() {
    
    char name[10];

   
    printf("Program starting.\n");
    printf("Insert name(max. 9 chars): ");
    
   
    scanf("%9s", name);  

    printf("Name is \"%s\".\n", name);
    printf("Name array size is %lu characters.\n", sizeof(name));
    printf("Program ending.\n");

    return 0;  
}
