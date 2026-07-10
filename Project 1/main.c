// We will write a program that generates a random number and asks the player to guess
// it. If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.

// When the user guesses the correct number, the program displays the number of
// guesses the player used to arrive at the number.

// Hint: Use loop & use a random number generator.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    
    int user_input = 0;
    int no_guesses = 0;

    while (user_input != random_number)
    {
        printf("Enter the number: ");
        scanf("%d", &user_input);
        no_guesses += 1;

        if (user_input > random_number)
        {
            printf("You guessed it wrong\n");
            printf("Enter Lower number please!\n");
            printf("\n");
        }

        else if (user_input < random_number)
        {
            printf("You guessed it wrong\n");
            printf("Enter Higher number please!\n");
            printf("\n");
        }

        else if (user_input == random_number)
        {
            printf("You guessed it right\n");
            printf("\n");
            printf("You took %d guesses to arrive at right number\n", no_guesses);
        }
    }
    return 0;
}