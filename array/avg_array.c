#include <stdio.h>
void main (void){
	int grades[10];
	int count = 10;
	long sum = 0;
	float avg = 0.0f;
	
	printf("\nEnter the 10 grades:\n");	
	
	// Read the 10 numbers to calculate average
	for (int i = 0; i < count; ++i){
		printf("%2u>", i + 1);
		scanf("%d", &grades[i]);
		sum += grades[i];
	}
	
	avg = (float)sum / count;
	printf("The average is: %.2f\n", avg);
}
