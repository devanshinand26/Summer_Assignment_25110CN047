#include <stdio.h>

int main() {
    int numbers[50];
    int size;
    int i, j;
    int found = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);

    printf("Enter the %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\nDuplicate numbers in the array: ");
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                printf("%d ", numbers[i]);
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {
        printf("None");
    }
    printf("\n");

    return 0;
}