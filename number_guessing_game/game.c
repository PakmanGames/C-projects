#include <stdlib.h>
#include <stdio.h>

int main() {
    int max, min;
    printf("Let's play a number guessing game\n");
    sleep(1);
    printf("The program will generate a random number between a range and you will try to guess it.\n");
    sleep(1);
    do {
        printf("(Note that the min must be less than the max)\n");
        printf("Enter the minimum value for this range: \n");
        scanf("%d", &min);
        printf("Now, enter a maximum value: \n");
        scanf("%d", &max);
    } while (min >= max);

    printf("You've entered %d as the min and %d as the max.\n", min, max);
    int randomNum = rand() % (max - min + 1) + min;
    printf("A random number has been generated.\n");
    int attempts = 0;
    int guess;
    do {
        attempts++;
        printf("Guess what the number could be: \n");
        scanf("%d", &guess);
        if (guess == randomNum) {
            printf("You guessed it! It only took you %d attempts\n", attempts);
        } else {
            printf("Aw it was wrong, try again!\n");
            sleep(1);
        }
    } while (guess != randomNum);
    return 0;
}