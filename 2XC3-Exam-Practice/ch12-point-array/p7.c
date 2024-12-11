#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// bool search(const int a[], int n, int key);

// a is the array to be searched, n is the number of elements 
// in the array, and key is the search key. search should return 
// true if key matches some element of a, and false if it does not.

bool search(const int a[], int n, int key);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (search(a, 9, 4)) {
        printf("yipeee\n");
    } else {
        printf("nooo \n");
    }
    return EXIT_SUCCESS;
}

bool search(const int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return true;
        }
    }
    return false;
}