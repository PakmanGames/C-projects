#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// double inner_product(const double *a, const double *b, int n);

// a and b both point to arrays of length n. The function should 
// return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. 
// Use pointer arithmetic—not subscripting—to visit array elements.

double inner_product(const double *a, const double *b, int n);

void main() {
    double a[] = {1, 2, 3, 4, 5};
    double b[] = {1, 2, 3, 4, 5};
    double inner_p = inner_product(a, b, 5);
    printf("the inner p is %.2f\n", inner_p);
}

double inner_product(const double *a, const double *b, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(a + i) * *(b + i);
    }
    return sum;
}