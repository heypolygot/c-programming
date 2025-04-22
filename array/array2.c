#include <stdio.h>
#define M 12
void main (void){
	int days[M] = {31, 28, [4] = 31, 30, 31, [1] = 29};
	int i; 

	for (i = 0; i< M; i++){
		printf("%2d %d\n", i+1, days[i]);
	}	
}
