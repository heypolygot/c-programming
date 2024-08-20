#include <stdio.h>
#include <stdbool.h>
float add(float y, float z){
	float x = y + z;
	return x;
}

float sub(float y, float z){
 	float x = y - z;
	return x;
}

float multiply(float y, float z){
	float x = y * z;
	return x;
}

float div(float y, float z){
	float x = y / z;
	return x;
}
	
float calculator();

void main(void){
	calculator ();
}


float calculator(){
	printf("This program is for solving mathematical problems...\n");
	float a;
	float b;
	printf("Enter a Numbers:");
	scanf("%f", &a);
	while (true){
		printf("Enter a number:");
		scanf("%f", &b);

		int n;
		printf("Enter :=\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
		scanf("%d", &n);

		if(n == 1) {
			a = add(a, b);
      	                printf("%.2f",a);
		}else if(n == 2) {
                       	a = sub(a, b);
               	        printf("%.2f",a);
		}else if(n == 3) {
                        a = multiply(a, b);
                        printf("%.2f",a);
		}else if(n == 4) {
          	        a = div(a, b);
			printf("%.2f",a);
		}else{
			printf("unvalid input...\n");
			break;
		}
		
		char o;
		printf("\nwant to calculate more..??\nEnter 'y' or 'n': \n");
		scanf(" %c", &o);
		printf("%c", o);
		if(o == 'y'){
                        continue;
		}else if (o == 'n' ){
			break;
		}else{
			printf("Invalid input...\n");
			break;					
		}
	}
}
