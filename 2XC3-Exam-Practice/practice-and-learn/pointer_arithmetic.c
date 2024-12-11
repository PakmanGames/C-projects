#include <stdlib.h>
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *pArr = arr;
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(pArr + i));
    }
    printf("\n");
}