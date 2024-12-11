#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a function named my_malloc that serves as a “wrapper” for malloc. 
// When we call my_malloc and ask it to allocate n bytes, it in
// turn calls malloc, tests to make sure that malloc doesn’t return a null pointer, and then
// returns the pointer from malloc. Have my_malloc print an error message and terminate
// the program if malloc returns a null pointer.

int *my_malloc(int n) {
    int *temp = malloc(n);
    if (temp == NULL) {
        printf("Error returtned a null pointer\n");
        exit(1);
    }
    return temp;
}

void main() {
    int *a = my_malloc(10 * sizeof(int));
}