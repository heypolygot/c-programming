#include <stdio.h>
void main(){
	int a = 12;
	float b = 3.4;
	char c = 'P';
	
	void *vptr;
	vptr = &a;
	printf("Value of a = %d\n",*(int*)vptr);

	vptr = &b;
	printf("Value of b= %f\n",*(float*)vptr);

	vptr = &c;	
	printf("Value of c = %c\n",*(char*)vptr);
}
