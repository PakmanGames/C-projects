#include <stdlib.h>
#include <stdio.h>

// find largest in series of num user enters
// enter num one by one
// if 0 or negative show largest nonnegative number
int main() {
    float num;
    float temp;
    do {
        printf("Enter a number: ");
        scanf("%f", &temp);
        if (temp > num) {
            num = temp;
        }
    } while (temp > 0);

    printf("The largest number entered was %f\n", num);
}