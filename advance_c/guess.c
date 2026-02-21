#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int secret, guess;
	int count =0;
        int history[100];

	srand(time(0));
	secret = rand() % 100 +1;

	printf("I have a secret number between 1 and 100.\n");
	printf("Let's play!\n");
	
	while (1) {
		printf("Enter your guess: ");
		scanf("%d",&guess);
	
	history[count] = guess;
	count = count +1;

		if (guess > secret) {
			printf("Too big!\n");
		} else if (guess < secret) {
			printf("Too small!\n");
		} else {
			printf("You win! The number is %d.\n", secret);
			break;

		}
	}
	printf("You guessed %d times.Game Over!\n", count);
        for (int i =0; i < count; i++) {
	    printf("%d",history[i]);
	}
	printf("\nGame Over!\n");
	return 0;

}
