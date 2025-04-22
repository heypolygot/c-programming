#include <stdio.h>
int main(){
	float c, d;
	scanf("%f %f", &c, &d);
	// %.2f will restrict decimal numbers after 2 decimal points.
	printf("sum = %.2f", c+d);
	return 0;
}
