#include <stdlib.h>
#include <stdio.h>

// Consider the following "mystery" function:

// void pb(int n)
// {
//  if (n != 0) {
//   pb(n / 2);
//   putchar('0' + n % 2);
//  }
// }

// Trace the execution of the function by hand. Then write a program that calls the function,
// passing it a number entered by the user. What does the function do?

void pb(int n);

int main() {
    // converts to binary
    printf("Enter a num: ");
    int num;
    scanf("%d", &num);
    pb(num);
    return EXIT_SUCCESS;
}

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}