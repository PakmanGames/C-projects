#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LEN 5

// Rewrite the following function to use pointer arithmetic 
// instead of array subscripting. (In other words, eliminate 
// the variables i and j and all uses of the [] operator.) 
// Use a single loop instead of nested loops.

int sum_two_dimensional_array(const int a[][LEN], int n) {
    int sum = 0;
    const int *p;

    for (p = &a[0][0]; p < &a[0][0] + n * LEN; p++) {
        sum += *p;
    }

    return sum;
}

void main() {

}