#include <stdio.h>

void main() {
	struct about{
		char name[50];
		int age;
		char gender;
		char hobby[20];
	};
	
	struct about myself = {"Ajay Kumar Dey", 19, 'M', "Coding"};
	
	printf("Name = %s\nAge = %d\nGender = %c\nHobby = %s\n",myself.name, myself.age, myself.gender, myself.hobby);
}
