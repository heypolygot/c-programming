#include <stdio.h>
#include <string.h>
void main (void){
	// program for comparing two characters or strings

	printf("%d\n",strcmp("A","A")); //prints 0 if nboth strings are same

	printf("%d\n",strcmp("A","B")); // prints -1 if the ASCII value of the second value is greater

	printf("%d\n",strcmp("Z","a")); // prints -1 because the ASCII value of small alphabets is greater than capitals 
	
	printf("%d\n",strcmp("B","A")); // prints 1 if the ASCII value of the second value is greater 
	
	printf("%d\n",strcmp("apples","apple")); // prints 1 because the length of the first value is greater
}
