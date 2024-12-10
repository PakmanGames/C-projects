#include <stdlib.h>
#include <stdio.h>

int main() {
    int *a;
    int length = 0;

    printf("Enter a length: ");
    scanf("%d", &length);

    a = malloc(length * sizeof(int)); // memory allocates the length * the memory of an int
    for (int i = 0; i < length; i++) {
        a[i] = i;
    }

    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    free(a); // free the memory allocated to a

    return EXIT_SUCCESS;
}