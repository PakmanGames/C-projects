#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);
    int temp;
    while (n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    printf("Greatest common divisor: %d\n", m);

    return EXIT_SUCCESS;
}