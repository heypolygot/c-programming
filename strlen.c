#include <stdio.h>
#include <string.h>
void main(void){
	char str1[]="My string 1";
	printf("the length of this string 1 is %zu\n",strlen(str1));
	
// %zu is format specifier, used in strlen() to return size_t type data 
	
	char str2[30]="my name is ajay";
	printf("the length of this string 2 is %zu\n",strlen(str2));
}
