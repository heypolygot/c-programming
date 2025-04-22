#include <stdio.h>

void abc(void) {
	for (int i = 1; i <= 5; i+=0){
		printf("Infinity");
	}
}

void main(void){
	abc();
}
