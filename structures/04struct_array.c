#include <stdio.h>
void main (){
	
	//declaring a structure for time.
	struct tym{
		int hours;
		int min;
		int sec;
	};
	
	struct tym mydate[3];
	
	for (int i = 0; i<3;i++){
		printf("Enter hour:");
		scanf("%d",&mydate[i].hours);
		printf("Enter min:");
		scanf("%d",&mydate[i].min);
		printf("Enter sec:");
		scanf("%d",&mydate[i].sec);
	}

	for (int i = 0; i<3;i++){
	printf("Date %d = %d:%d:%d\n",i,mydate[i].hours,mydate[i].min,mydate[i].sec);	
	}
}
