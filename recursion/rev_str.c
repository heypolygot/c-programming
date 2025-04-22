#include <stdio.h>

/*
int rev_str(){
	char ch;
	if ((ch = getchar()) != '\n') { // Reads a character
        	rev_str();            // Calls itself for the next character
        	putchar(ch); 
	}
}
*/

int rev_str(){
	char ch;
	scanf("%c", &ch);
    	if (ch != '\n') {
        	rev_str();
        	putchar(ch);
    }
}



void main() {
	printf("Enter a line of text:");
	rev_str();
	printf("\n");		
}

