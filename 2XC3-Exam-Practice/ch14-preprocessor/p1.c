#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write parameterized macros that compute the following values:

// (a) The cube of x.
#define CUBE(x) (x * x * x)
// (b) The remainder when n is divided by 4.
#define REMAINDER(n) (n % 4)
// (c) 1 if the product of x and y is less than 100, 0 otherwise.
#define PRODUCT(x, y) (((x) * (y)) < 100 ? 1: 0)

// Do your macros always work? If not, describe what arguments would make them fail.

void main() {
    int a = 3;
    int b = 10;
    int c = 11;
    int d = 5;
    printf("CUBE(%d): %d\n", a, CUBE(a));
    printf("REMAINDER(%d): %d\n", b, REMAINDER(b));
    printf("LESS_THAN_100(%d, %d): %d\n", c, d, PRODUCT(c, d));
}