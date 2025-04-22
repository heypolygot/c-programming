#include <stdio.h>

void main() {
	int a;
	repeat: 	
	printf("Enter a number between 1-10:");
	scanf("%d",&a);
	if (1<=a<=10 && a==7){
		printf("You got the number..!\n");
	}else{
		goto repeat;
	}
}	
