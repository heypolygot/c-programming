#include <stdio.h>
void main (){
	double w, h, p, a;
	printf("Enter height:");
	scanf("%lf",&h);
	
	printf("Enter width:");
	scanf("%lf",&w);
	
	p = (2 * (h + w));
	a = h * w;
	printf("Area = %.2lf\nPerimeter = %.2lf\n", a,p);
}
