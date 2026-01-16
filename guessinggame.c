#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int snumber;
    int turns = 0;
    int guess; 
    int keepgoing = 1;
    

    srand(time(0));
    snumber = (rand() % 100) + 1; 
    printf("Number Guessing Game\n");

    while (keepgoing) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        turns++;

        if (guess == snumber) {
            printf("Good job. It took you %d turns to find the number.\n", turns);
            keepgoing = 0;
        } else if (guess < snumber) {
            printf("Too low, try another guess.\n");
        } else {
            printf("Too high, try another guess.\n");
        }
    }
    if (turns <= 3) {
        printf("Above average, Good work.\n");
    } else if (turns <= 7) {
        printf("Average, nice job.\n");
    } else {
        printf("Below average. Better luck next time.\n");
    }
    return 0;
}