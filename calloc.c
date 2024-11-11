#include <stdio.h>
#include <stdlib.h>
void main (){
    int *pnum = (int*)calloc(75,sizeof(int));
    printf("size of int is %ld\n", sizeof(int));

    if(!pnum){
        printf("ohh no\n");
    }else{
        printf("ohh yeahh\n");
        free(pnum);
        pnum = NULL; 
        if(!pnum){
            printf("ohh no\n");
        }else{
            printf("ohh yeahh\n");
        }
        
    }
        
    
}


