#include <stdio.h>

int main() {
    int numbers[50],size,i,largest, secondLargest;

    printf("Size of array ");
    scanf("%d", &size);

    if (size < 2) {
        printf("You need to enter at least 2 numbers to find a second largest!\n");
        return 0;
    }

    printf("Enter the %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    secondLargest = -1; 

    for (i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    if (secondLargest == -1) {
        printf("\nThere is no second largest number.\n");
    } else {
        printf("\nThe largest number is %d.\n", largest);
        printf("The second largest number is %d.\n", secondLargest);
    }

    return 0;
}