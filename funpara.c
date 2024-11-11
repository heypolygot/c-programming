#include <stdio.h>
void main(){
	int a, *ptra;
	printf("Enter a number:");
	scanf("%d",&a);
	ptra = &a;
	printf("%p",ptra);	
        printf("%d",*ptra);
}
