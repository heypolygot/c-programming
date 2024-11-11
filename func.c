#include <stdio.h>
void gcd (int a, int b){
	int c;
	if (a>0 && b>0 && a!=b){
		if (a>b){
			for (int i=0; i<=b; i++){
				if (b%i==0){
					c=i;
				}
			}
		}else{
			for (int i=0; i<=b; i++){
				if (b%i==0){
					c=i;
				}
			}
		}
		printf("Greatest Common Divisor is : %d",c);
	}else{
		printf("Negative integers not allowed..!");
	}
}

void main (void){
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a, &b);
	gcd(a,b);
}
