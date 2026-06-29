#include <stdio.h>
int findFrequency(int arr[], int size, int target);

int main() {
    int numbers[100], size, target, count;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Enter the target number: ");
    scanf("%d", &target);
    count = findFrequency(numbers, size, target);
    if (count == 0) {
        printf("The number %d is not in the array.\n", target);
    } else {
        printf("The number %d appears %d times in the array.\n", target, count);
    }
    return 0;
}
int findFrequency(int arr[], int size, int target) {
    int count = 0; 
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            count = count + 1; 
        }
    }

    return count; 
}