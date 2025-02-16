#include <stdio.h>

int main(void) {
    int secertNumber = 5;
    int guess;
    int guessLimit = 3;
    int guessCounter = 0;
    while (guess != secertNumber && guessCounter < guessLimit ) {
        printf("Guess the number between 1 and 10: \n");
        scanf("%d", &guess);
        if (guess == secertNumber) {
            printf("You win!\n");

        } else{
            printf("You lose!\n");
            guessCounter++;
        }
    }
    return 0;
}