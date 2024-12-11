#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

//void find_two_largest(int a[], int n, int *largest, int *second_largest);

// When passed an array a of length n, the function will search for its largest
// and second-largest elements, storing them in the variables pointed to by largest
// and second_largest, respectively.

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main() {
    int a[] = {54, 7, 8, 1, 67, 1, 69, 23, 51, 6};
    int size = 10;
    int largest = a[0];
    int second_largest = a[0];
    find_two_largest(a, size, &largest, &second_largest);
    printf("largest: %d, second largest: %d\n", largest, second_largest);
    return EXIT_SUCCESS;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    for (int i = 0; i < n; i++) {
        if (a[i] > *largest) {
            int temp = *largest;
            *largest = a[i];
            *second_largest = temp;
        }
    }
}