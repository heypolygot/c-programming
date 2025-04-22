#include <stdio.h>
void main(void){
	int count = 10, x;
	int *int_ptr;
	int_ptr = &count;
	x = *int_ptr;
	printf("count = %i, x = %i\n",count, x);
}
