#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

void main() {
	int a, b, c, d;
	printf("Enter 4 numbers :");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans;
	printf("The greatest number is = %d\n", maximum_Of_Four(a, b, c, d));
}


int maximum_Of_Four (int a, int b, int c, int d){
	if (a>b && a>c && a>d){
		return a;
	}else if (b>a && b>c && b>d){
		return b;
	}else if (c>a && c>b && c>d){
		return c;
	}else if (d>a && d>b && d>c){
		return d;
	}
}
