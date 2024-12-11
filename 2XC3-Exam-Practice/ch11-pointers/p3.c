#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// The following function supposedly computes the sum and average 
// of the numbers in the array a, which has length n. avg and sum 
// point to variables that the function should modify. Unfortunately, 
// the function contains several errors; find and correct them.

void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}

int main() {
    double avg;
    double sum;
    double a[] = {1, 2, 3, 4, 5};
    avg_sum(a, 5, &avg, &sum);
    printf("sum: %.2f, avg: %.2f\n", sum, avg);
    return EXIT_SUCCESS;
}