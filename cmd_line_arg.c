#include <stdio.h>
int main (int argc, char *argv[]){
	int numberOfArguments = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];
	printf("Number of Arguments: %d\n",argument1);
	printf("Argument 2 ia the command line argument: %s\n",argument2);
}
