#include <stdio.h>

int main() {
    int rows,i, j, k, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        for (k = i - 1; k >= 1; k--) {
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }

    return 0;
}