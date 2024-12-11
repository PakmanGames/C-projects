#include <stdlib.h>
#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main() {
    int size = 5;
    double a[] = {1, 2, 3, 4, 5};
    double b[] = {1, 2, 3, 4, 5};
    double innerProduct = inner_product(a, b, size);
    printf("The double inner product is: %.2f\n", innerProduct);

    return EXIT_SUCCESS;
}

double inner_product(double a[], double b[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}