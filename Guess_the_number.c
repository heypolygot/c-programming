#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main (void){
	printf("Welcome...!\nThis is a game of guessing random numbers.\n/In which you will get 5 chances to guess the number.\nIf you guessed it right you will win either loose the game.\n");
	srand(time(NULL));
	int n = rand() % 21;
	int g, r = 1;
	while (r <= 5){
		printf("Guess a number between 0 - 20:\n");
		scanf("%d", &g);
		if (g == n){
			printf("Congrats...You guessed the number!\n");
			break;

		}else if (g != n && r == 5){
			printf("Oops..!! you guessed it wrong...!\n");
			printf("You have %d chances left.\nYOU LOOSE...\nThe Number was %d\n", 5 - r, n);
		}else{
			printf("Oops..!! you guessed it wrong...!\n");
			printf("You have %d chances left.\n", 5 - r);
		}
		r++;
	}
}
