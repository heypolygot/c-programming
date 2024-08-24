#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main (void){
	printf("Welcome...!\nThis is a game of guessing random numbers.\nIn which you will get 5 chances to guess the number.\nIf you guessed it right you will win either loose the game.\n");
	srand(time(NULL));
	int n = rand() % 21;
	int g, r = 1;
	while (r <= 5){
		printf("\n\nGuess a number between 0 - 20:\n");
		scanf("%d", &g);
		if (g == n){
			printf("Congrats...You guessed the number!\n");
			break;

		}else if (g != n && g < n){
			printf("Oops Wrong...The number is greater than that.\n");
			printf("You have %d chances left.\n", 5 - r);
		}else if (g != n && g < n){
			printf("Oops Wrong...The number is smaller than that.\n");
			printf("You have %d chances left.\n", 5 - r);
		}else{
			printf("Oops..!! you guessed it wrong...!\n");
			printf("You have %d chances left.\n", 5 - r);
		}
		r++;
	}
	printf("Sorry You loose,\nThe number was %d.\n",n);
}
