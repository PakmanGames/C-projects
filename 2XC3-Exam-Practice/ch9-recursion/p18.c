#include <stdlib.h>
#include <stdio.h>

int gcd(int m, int n);

int main() {
    int greatestcd = gcd(12, 24);
    printf("%d\n", greatestcd);
    return EXIT_SUCCESS;
}

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}