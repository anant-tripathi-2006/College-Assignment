#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("Guess a number (1-100): ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Correct! You guessed it.\n");

    } while (guess != number);

    return 0;
}