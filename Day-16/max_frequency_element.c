#include <stdio.h>

int main() {
    int arr[50];
    int size, i, j;
    int maxCount = 0, currentCount;
    int maxElement;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        currentCount = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxElement = arr[i];
        }
    }

    printf("\nMaximum frequency element is %d\n", maxElement);

    return 0;
}