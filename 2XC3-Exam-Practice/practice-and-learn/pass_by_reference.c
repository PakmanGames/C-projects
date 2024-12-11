#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {
    int x = 5;
    int y = 10;
    printf("x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return EXIT_SUCCESS;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}