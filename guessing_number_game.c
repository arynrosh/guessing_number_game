/*GUESSING NUMBER GAME BY ARYAN ROSHAN*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seeds the number generator

    printf("Welcome to the Number Guessing Game by Aryan Roshan\n");

    // Setting the range for the random number, here it is between 1 and 100.
    int lower_limit = 1;
    int upper_limit = 100;
    int secret_number = rand() % (upper_limit - lower_limit + 1) + lower_limit;

    // Initializing variables
    int attempts = 0;
    int guess_number = 0;
    
    printf("Guess a number between %d and %d\n", lower_limit, upper_limit);

    while (guess_number != secret_number) {
        printf("Enter your guess: ");
        // Stores the number guessed by the player and increments the number of attempts.
        scanf("%d", &guess_number);
        attempts++;
    
        // Checks whether the number is high, low, or guessed.
        if (guess_number == secret_number) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        } else if (guess_number < secret_number) {
            printf("Your number is low! Try again.\n");
        } else {
            printf("Your number is high! Try again.\n");
        }
    }

    return 0;
}
