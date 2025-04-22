#include <stdio.h>

void main(void) {
	int x;
	int y;
	int z;

	printf("Enter 2 numbers:");
	scanf("%d %d",&x, &y);
	z = x + y;

	printf("The sum of the numbers %d and %d are %d\n",x,y,z);
}
