/*

#include <stdio.h>
#include <stdbool.h>
void main (void){

	printf("Welcome to Program...\nPress x/X to exit");
	char x;
	while (true){
		scanf("%c",&x);	
		if (x == 'x' || x == 'X'){
			break;
		}
	}
}
*/
#include <stdio.h>
void main (void){
	char a;
	float b,c;
	printf("Enter a number:");
	scanf("%f",&b);
	printf("Enter a number:");
	scanf("%f",&c);
	printf("Enter:\n'+' for Addition\n'-' for Subtraction\n'*' for Multiplication\n'/' for Division\n");
	scanf(" %c",&a);
	switch(a){
		case '+':
			printf("%.2f\n",b+c);
			break;
		case '-':
			printf("%.2f\n",b-c);
			break;
		case '*':
			printf("%.2f\n",b*c);
			break;
		case '/':
			printf("%.2f\n",b/c);
			break;
		default:
			printf("Invalid chioce");
	}
}
