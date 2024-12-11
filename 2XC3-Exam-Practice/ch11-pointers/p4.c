#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// void swap(int *p, int *q);

//When passed the addresses of two variables, swap should exchange the values of the variables:

// swap(&i, &j); /* exchanges values of i and j */

void swap(int *p, int *q);

int main() {
    int p = 10;
    int q = 5;
    printf("p: %d, q: %d\n", p, q);
    swap(&p, &q);
    printf("p: %d, q: %d\n", p, q);
    return EXIT_SUCCESS;
}

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}