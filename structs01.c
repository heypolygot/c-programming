#include <stdio.h>
void main (){
	struct tym{
		int hours;
		int min;
		int sec;
	};
	struct tym t;
	t.hours=12;
	t.min=30;
	t.sec=32;
	
	printf("The time this program is made at is --> %d:%d:%d\n", t.hours,t.min,t.sec);
}
