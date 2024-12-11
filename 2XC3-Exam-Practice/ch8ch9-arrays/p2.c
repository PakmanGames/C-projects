#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
// many times each digit appears in the number:
// Enter a number: 41271092
// Digit: 0 1 2 3 4 5 6 7 8 9
// Occurrences: 1 2 2 0 1 0 0 1 0 1

int repdigit() {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    int digit_occ[10] = {0};

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            digit_occ[digit] += 1;
        } else {
            digit_seen[digit] = true;
            digit_occ[digit] += 1;
        }
        
        n /= 10;
    }

    printf("Digit: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    printf("Occur: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_occ[i]);
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