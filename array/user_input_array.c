#include <stdio.h>
void main (void) {
	printf("This is a user-input matrix program");
	int matrix[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Enter a value for column - %d of row - %d : ", j, i);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d, ", matrix[i][j]);
		}
		printf("\n");
	}
}
