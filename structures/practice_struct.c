#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Stud {
	int roll;
	char* name;
	int year;
}Students; 


int main() {
	int limit;
	printf("Enter limit of students :");
	scanf("%d",&limit);
	getchar();  // <== remove newline

		
	Students* new_std = calloc(limit,  sizeof(Students));	

	for (int i = 0; i < limit; i++){
		// create a pointer and point it to the user entered string as name 
		char *temp = malloc(sizeof(char) * 255); // allow max 255 chars for name
		
		printf("Enter Name: ");
		fgets(temp, 255, stdin);
		
		// create and allocate memory to the name field of the struct 
		new_std[i].name = calloc( strlen(temp) -3, sizeof(char));
	

		strncpy(new_std[i].name,temp,strlen(temp)-1);
		
		// store the year 
		printf("Enter Year: ");
		scanf("%d",&new_std[i].year);


		// assign the roll number 
		new_std[i].roll = i + 1;
		
		getchar();
	}

	for (int i = 0; i < limit; i++) 	
	{
		printf("Roll Number = %d Name = %s Year of Admission = %d\n", new_std[i].roll, new_std[i].name, new_std[i].year);
		// do not forget to release the mem allocated to name 
		
		free(new_std[i].name);
	}

	// do not forget to release the mem allocated to the struct
	free(new_std);
	return 0;
}

