
//Recursive program to print numbers from 1 to 10.

#include <stdio.h>

void print_numbers(int n){
	if (n>10){
		return;
	}	
	printf("%d\n",n);
	print_numbers(n+1);
}

void main() {
	print_numbers(1);
}
