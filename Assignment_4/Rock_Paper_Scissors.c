#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerScore = 0, computerScore = 0, playerChoice, computerChoice;

    printf("*****ROCK__PAPER__SCISSORS*****\n");

    // Seed the random number generator
    srand(time(0));

    // Game loop: Continue until either player or computer reaches 2 points
    while (playerScore < 2 && computerScore < 2) {
        printf("\n**** Pick Your Choice Player ****\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("**************************\n");
        printf("Enter your choice: ");
        scanf("%d", &playerChoice);

        // Generate the computer's choice (1 = Rock, 2 = Paper, 3 = Scissors)
        computerChoice = 1 + rand() % 3;

        // Display choices
        printf("\nYou chose: ");
        if (playerChoice == 1) printf("Rock\n");
        else if (playerChoice == 2) printf("Paper\n");
        else if (playerChoice == 3) printf("Scissors\n");
        else {
            printf("Invalid choice! Please choose 1, 2, or 3.\n");
            continue;
        }

        printf("Computer chose: ");
        if (computerChoice == 1) printf("Rock\n");
        else if (computerChoice == 2) printf("Paper\n");
        else printf("Scissors\n");

        // Determine the winner of the round
        if (playerChoice == computerChoice) {
            printf("It's a draw! Both chose the same.\n");
        } else if ((playerChoice == 1 && computerChoice == 3) || 
                   (playerChoice == 2 && computerChoice == 1) || 
                   (playerChoice == 3 && computerChoice == 2)) {
            printf("You win this round!\n");
            playerScore++;
        } else {
            printf("Computer wins this round!\n");
            computerScore++;
        }

        // Display the current score
        printf("SCORE: Player %d - %d Computer\n", playerScore, computerScore);
    }

    // Declare the final winner
    if (playerScore == 2) {
        printf("\nCongratulations! You won the game!\n");
    } else {
        printf("\nThe computer won the game. Better luck next time!\n");
    }

    return 0;
}
