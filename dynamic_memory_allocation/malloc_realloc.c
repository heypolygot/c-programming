#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (void){
    char *str;
    
    // Initial memory allocation
    str = (char*)malloc(15);
    strcpy(str, "Jason");
    printf("String = %s, Address = %u\n", str, str);
    
    // Reallocating memory 
    str = (char*) realloc(str,25);
    strcat(str,".com");
    printf("String = %s, Address = %u\n", str, str);

    free(str);
}   