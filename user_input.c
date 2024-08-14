#include <stdio.h>
int main() {
	char str[100];
	int i;

	printf("Enter a Name and Age:");
	scanf("%s %d",str, &i);

	printf("\nYou have entered:\nname = %s\nage = %d\n", str, i);

	return 0;
}
