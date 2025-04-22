#include <stdio.h>
void main (void){
	int hcv = 55;;
	int * phcv = NULL;
	phcv = &hcv;
	printf("The address of the pointer is:\t%p\n",(void*)&phcv);
	printf("The value of the pointer is:\t%p\n",phcv);
	printf("The value of what the pointer is pointing to is:\t%d\n",*phcv);
}
