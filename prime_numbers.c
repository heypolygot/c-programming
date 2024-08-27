#include <stdio.h>
void main (void){
	printf("Here are all the prime numbers from 1 - 100...\n");
	int pn[100] = {1, 2};
	for (int i = 3; i <= 100; i++){
		int n, j = 0;
		for (int k = 1; k <= i; k++){
			if (i % k == 0){
				j += 1;
			}
		}
		if (j == 2){
			n = i;
			pn[n] = i;
			n++;
		}
	}
	for (int i = 0; i < 100; i++){
		if (pn[i] != 0){
			printf("%d\n",pn[i]);
		}
	}
}
