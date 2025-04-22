#include <stdio.h>
#include <stdbool.h>
void main(void) {
	int myint = 33;
	double mydouble = 33.333333333333e11;
	float myfloat = 33.333;
	bool mybool = true;
	printf("integer=%d\nfloat=%f\ndouble=%lf\nbool=%s\n",myint,myfloat,mydouble,mybool? "true":"false");
} 
