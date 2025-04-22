#include <stdio.h>

int add_num(int num){
	if (num == 0){
		return 0;
	}
	int temp;
	printf("Enter a number:");
	scanf("%d",&temp);
	return temp + add_num(num - 1);

}

void main() {
	int num;
	printf("Enter limit:");
	scanf("%d",&num);
	printf("The sum of all the numbers you entered is: %d\n",add_num(num));
}

