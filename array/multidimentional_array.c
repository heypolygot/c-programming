#include <stdio.h>
int main (void) {
	int matrix[3][3] = {
		{1,2,3},
		{7,8,9},
		{4.5,6}
	};

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("(%d)(%d) = %d		",i, j, matrix[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
