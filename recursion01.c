#include <stdio.h>


int iterative(int n){
	int a = 1;
	while (n>0){
		a = a*n;
		n--;
	}
	return a;
}



int recursion(int n){
	if (n==0){
		return 1;
	}
	return n* recursion(n-1);
}


void main() {
	int b=5;
	int c=iterative(b);
	int d=recursion(b);
	printf("Iteration = %d\nRecursion = %d\n",c,d);
}
