#include <stdio.h>
void main (void){
	char sen[100];
	printf("Enter a sentence:");
	scanf("%[^\n]",sen);
	printf("The sentence you entered is: %s\n",sen);
}
