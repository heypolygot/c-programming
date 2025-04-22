#include <stdio.h>

void main() {
	int arr[6];
	int *ptr;
	ptr = arr;
	printf("Enter 5 elements:\n");
	for (int i = 0; i<5;i++){
		scanf("%d",ptr+i);
	}
	printf("Elements are:\n");
	for (int i = 0; i<5;i++){
		printf("%d",*(ptr+i));	
	}
}
