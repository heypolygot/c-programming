#include <stdio.h>
void main (){
	
	//declaring a structure for time.
	struct tym{
		int hours;
		int min;
		int sec;
	};
	
	//Declaring a variable 't' of type structure time.
	struct tym t;
	
	//Initialising variable 't'.
	t.hours=12;
	t.min=30;
	t.sec=32;
	
	printf("The time this program is made at is --> %d:%d:%d\n", t.hours,t.min,t.sec);
}
