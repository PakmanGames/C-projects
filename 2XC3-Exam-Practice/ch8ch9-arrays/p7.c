#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[5][5];
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &nums[i][0], &nums[i][1], &nums[i][2], &nums[i][3], &nums[i][4]);
    }

    int row_totals[5] = {0};
    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            row_totals[i] += nums[i][j];
        }
        printf("%d ", row_totals[i]);
    }
    printf("\n");

    int col_totals[5] = {0};
    printf("Column totals: ");
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            col_totals[j] += nums[i][j];
        }
        printf("%d ", col_totals[j]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}