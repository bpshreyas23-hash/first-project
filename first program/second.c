#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, number, attempts = 5;

    srand(time(0));

    number = rand() % 100 + 1;

    printf("=====================================================\n");
    printf("             NUMBER GUESSING GAME\n");
    printf("=====================================================\n");

    printf("Welcome to the number guessing game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess my number.\n\n", attempts);

    while (attempts > 0)
    {
        printf("Attempt %d/5\n", 6 - attempts);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == number)
        {
            printf("\nCongratulations! 🎉\n");
            printf("You guessed the number correctly!\n");
            printf("You had %d attempts remaining.\n", attempts - 1);
            break;
        }
        else if (guess > number)
        {
            printf("Sorry, that's too high!\n\n");
        }
        else
        {
            printf("Sorry, that's too low!\n\n");
        }

        attempts--;
    }

    if (attempts == 0 && guess != number)
    {
        printf("Sorry, you've run out of attempts.\n");
        printf("The number was %d.\n", number);
    }

    return 0;
}