#include <stdio.h>
void main (void){
	int array1[10] = {0, 1, 4, 9, 16};
	for (int i = 5; i < 10; ++i){
		array1[i]  = i*i;
	}
	for (int i  = 0; i < 10; ++i){
		printf("array1[%i] = %i\n", i, array1[i]);
	}
}
