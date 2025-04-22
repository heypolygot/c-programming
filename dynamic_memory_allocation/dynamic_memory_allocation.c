#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    int *ptr = (int*)malloc(5*sizeof(int));
    if (!ptr){
        printf("Memory allocation failed");
        return 1;
    }  


    //Assign initial values
    for (int i = 1; i < 5; i++){
        ptr[i] += 1;
    }

    //Print all values before reallocation
    for(int i = 0; i < 5; i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");

    //Reallocate memory to hold 10 integers
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    if (!ptr){
        printf("Reallocation Failed");
        return 1;
    }


    //Assign values to new elements
    for(int i = 0; i < 10; i++){
        ptr[i] += 1;
    }


    //Print all values after reallocation
    for(int i = 0; i < 10; i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");   

    free(ptr);
    return 0;
}