#include <stdlib.h>
#include <stdio.h>

int main() {
    int b = 42;
    // pointer is just something that stores a memory address
    int *a = &b; // pointer a points to the memory address of b
    // Pointers can be dereferenced using * to get the value at that memory address of the pointer

    printf("b: %d\n", b);
    printf("*a: %d\n", *a);

    *a = 50;
    
    printf("b: %d\n", b);
    printf("*a: %d\n", *a);

    return EXIT_SUCCESS;
}