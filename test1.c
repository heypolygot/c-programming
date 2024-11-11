#include <stdio.h>
void main (void){
	int a[6] = {5,6,7,8,9,10};
	int b[6] = {3,4,5,9,10,12};
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			if (a[i] == b[j]){
				printf("%d ",a[i]);
			}else{
				continue;
			}
		}
	}
	printf("\n");
}
