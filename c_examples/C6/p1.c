#include <stdio.h>
#include <stdlib.h>

#define LIST_SIZE 5

/* Struct for the array */
typedef struct CUSTOMER {
    int customerNum;
    struct CUSTOMER *pNext;
} CUSTOMER;

int main(void) {
    CUSTOMER *pStart = NULL, *pEnd = NULL; /* Pointers for list operations */
    CUSTOMER *pNew, *ptr; /* Helper pointers for memory allocation and looping */
    int i;

    /* Creating linked list with LIST_SIZE items */
    for (i=1; i <= LIST_SIZE; i++) {
        /* Allocating memory */
        if ((pNew = (CUSTOMER*)malloc(sizeof(CUSTOMER))) == NULL ){
            perror("Memory allocation failed");
            exit(1);
        }
        /* Assigning new member variables with values */
        pNew->customerNum = i;
        pNew->pNext = NULL;
        /* Adding a new item to the list as the last item */
        if (pStart == NULL) {  /* If list is empty, */
            pStart = pNew;     /* create first item */ 
            pEnd = pNew;
        } else { /* List is not empty, adding item to the end */
            pEnd->pNext = pNew;
            pEnd = pNew;
        }
    }

    /* Looping linked list using method shown in first example */
    ptr = pStart;
    while (ptr != NULL) {
        printf("Serving customer number: %d.\n", ptr->customerNum);
        ptr = ptr->pNext;
    }
    /* Memory deallocation */
    ptr = pStart;
    while (ptr != NULL) {
        pStart = ptr->pNext;
        free(ptr);
        ptr = pStart;
    }
    printf("No more customers in line.\n");
    return(0);
}