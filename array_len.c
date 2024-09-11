#include <stdio.h>
void  main (void){
	int arr[3] = {7, 8, 9};
	printf("%lu\n", sizeof(arr)/sizeof(arr[3]));
}
