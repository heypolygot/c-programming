#include <stdio.h>
void main (){

	//Un-Named structure....
	
	struct
	{
		int date;
		int month;
		int year;
	}today;
	today.date = 13;
	today.month=11;
	today.year=2024;
	printf("Today's date is --> %d/%d/%d\n", today.date, today.month, today.year);
}
