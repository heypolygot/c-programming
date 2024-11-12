#include <stdio.h>

int CBV(int a, int b){
	a = 20;
	b = 10;
	return 0;
}


int CBR(int *a, int *b){
	*a = 200;
	*b = 100;
	return 0;
}

void main(){
	//Call by Value...
	int a = 10, b = 20;
	CBV(a,b);
	printf("%d and %d\n", a, b);

	//Call by Reference...
	int c = 100, d = 200;
	CBR(&c, &d);
	printf("%d and %d\n", c, d);
	
}	


