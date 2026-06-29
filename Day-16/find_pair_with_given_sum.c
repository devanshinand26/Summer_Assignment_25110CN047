#include <stdio.h>

int main() {
    int arr[50];
    int size, i, j, target;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("\nPairs with sum %d:\n", target);
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No pairs found.\n");
    }

    return 0;
}