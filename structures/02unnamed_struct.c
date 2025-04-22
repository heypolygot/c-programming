#include <stdio.h>
void main (){

	//Un-Named structure....
	
	struct
	{
		int date;
		int month;
		int year;
	}today, yesterday;

	today.date = 13;
	today.month=11;
	today.year=2024;

	yesterday.date = 12;
	yesterday.month = 11;
	yesterday.year = 2024;

	printf("Yesterday's date was --> %d/%d/%d\n", yesterday.date, yesterday.month, yesterday.year);
	printf("Today's date is --> %d/%d/%d\n", today.date, today.month, today.year);
}
