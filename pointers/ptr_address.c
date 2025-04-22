#include <stdio.h>
void main(){
	int a = 10, *ptr_a;
	ptr_a = &a;
	printf("The address of variable a is %p\n", &ptr_a);
}
