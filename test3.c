#include <stdio.h>
void main (void){
	int a[6] = {5,6,7,8,9,10};
	int b[8] = {3,4,5,9,10,12,14,15};
	int c=0;
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 8; j++){
			if (a[i] == b[j]){
				c+=1;
			}else{
				continue;
			}
		}
	}
	printf("%d\n",c);
}
