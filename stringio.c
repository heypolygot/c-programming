#include <stdio.h>
#include <string.h>
void main (void){
	char str[20];
	printf("Enter a string:");
	scanf("%s",str);
	printf("Your entered string is :%s",str);
	printf("The length of your string is :%ld",strlen(str));
}
