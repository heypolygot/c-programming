#include <stdio.h>
#include <string.h>
void main (void){
	char a[10]="Hello", b[10]="World";

	// strcat() is used to append the value of 2nd string to the end of the first string.
	printf("Concatenated string = %s\n",strcat(a,b));
}
