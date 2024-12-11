#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
// were repeated:

// Enter a number: 939577
// Repeated digit(s): 7 9

int repdigit() {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    bool digit_repeated[10] = {false};

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            digit_repeated[digit] = true;
        } else {
            digit_seen[digit] = true;
        }
        
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}


int main() {
    int a = repdigit();
    return EXIT_SUCCESS;
}