#include <stdio.h>
#include <string.h>

// this program is for copying or assigning data to a predeclared variable.
void main (void){
	char a[30],b[40]= "Hello world!", c[20];

	strcpy(a, "My name is Ajay"); //assigning 
	printf("%s\n",a);

	strcpy(b, "Heyy my friend!"); //changing value
	printf("%s\n",b); 

	strcpy(c, b); //copying
	printf("%s\n",c); 
}
