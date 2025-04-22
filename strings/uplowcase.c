#include <stdio.h>
#include <ctype.h>
#include <string.h>

//function for detecting the case of the string
void case_detector(char c[10]){
	int y=0,z=0;
	for (int i=0; i<strlen(c); i++){
		if (islower(c[i])){
			y+=1;
		}else if (isupper(c[i])){
			z+=1;
		}else{
			printf("Invalid input\n");
			break;
		}
	}
	if (y==strlen(c)){
		printf("Lower case\n");
	}else if(z==strlen(c)){
		printf("Upper case\n");
	}else{
		printf("Neither Upper not Lower\n");
	}
}

//main function
void main (void){
	char c[10];
	printf("Enter a string:\n");
	scanf("%s",c);
	case_detector(c);
}
