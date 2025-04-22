#include <stdio.h>
int main (void) {
	int matrix[3][3]; 

	// Taking the array from the user
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Enter a value for Row - %d, and Column - %d", i,j);
			scanf("%d", &matrix[i][j]);
		}
	}	
	// Printing the array
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", matrix[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
