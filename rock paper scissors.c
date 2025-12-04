#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int player, computer;
    int rounds = 0;
    char playAgain;
    
    srand(time(0)); //  it will seed random number 

    do {
        rounds++; 

        // player input
        printf("\nRound %d : Choose your move (1-Rock, 2-Paper, 3-Scissors): ", rounds);
        scanf("%d", &player);

        // computer input
        computer = (rand() % 3) + 1; 
        printf("Computer chose: %d\n", computer);

        // winner 
        if(player == computer){
            printf("It's a draw!\n");
        }
        else if((player == 1 && computer == 3) || (player == 2 && computer == 1) ||  (player == 3 && computer == 2)){
            printf("You win!\n");
        }
        else{
            printf("Computer wins!\n");
		}
            

        // asking if player want to continue only after 4 rounds
        if(rounds >= 4) {
            printf("To continue playing: Press (y/n): ");
            scanf(" %c", &playAgain); // using space to consume newline
        } else {
            playAgain = 'y'; // continuing do loop when rounds is less then 4
        }

    } while(playAgain == 'y' || playAgain == 'Y'); // if this is true then run the loop again#include<stdio.h>

    printf("\nThanks for playing!\n");
    return 0;
}


