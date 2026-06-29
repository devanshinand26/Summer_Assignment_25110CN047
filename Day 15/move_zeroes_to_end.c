#include <stdio.h>

int main() {
    int arr[50];
    int size, i;
    int count = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    for (i = count; i < size; i++) {
        arr[i] = 0;
    }

    printf("\nArray after moving zeroes: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}