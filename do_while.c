#include <stdio.h>

void doWhile2();

void main(){
	int n;
	do
		scanf("%d", &n);
	while (n != 20);

	doWhile2();
}

void doWhile2(void){
	int n = 0;
	do{
		printf("\nNumber = %d",n);
		n++;
	}
	while (n < 4);
}
