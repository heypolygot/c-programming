#include <stdio.h>
#include <string.h>

void swap(int *x, int *y){
	int temp;
	temp = *x;	//saves the value of a into temp.
	*x = *y;	//saves the value of y into a.
	*y = temp;	//saves the value of temp into y.
}

void main(){
	int a = 100, b = 200;
	
	printf("Before swap, value of a: %d\n",a);
	printf("Before swap, value of b: %d\n",b);

	swap(&a,&b);

	printf("After swap, value of a: %d\n",a);
	printf("After swap, value of b: %d\n",b);
}
