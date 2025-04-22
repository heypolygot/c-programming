#include <stdio.h>
#include <stdlib.h>
void main (){
	int *ptr = (int*)malloc(5 * sizeof(int));
	
	if (!ptr){
		printf("Memory allocation failed \n");
	}else {
		printf("Memory allocation succeed\n");	
	}
}
