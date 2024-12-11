#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
// number to be tested for repeated digits. The program should terminate when the user enters
// a number that’s less than or equal to 0.

int repdigit() {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    do {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0) {
            break;
        }

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");
    } while (n > 0);
    return 0;
}

int main() {
    int a = repdigit();
    return EXIT_SUCCESS;
}