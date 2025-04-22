#include <stdio.h>
void main(){
	int number = 15;
	int *ptr = &number;
	printf("number is %d and pointer is %p",number, (void*)&number);
}
