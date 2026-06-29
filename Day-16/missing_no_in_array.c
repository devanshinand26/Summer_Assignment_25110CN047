#include <stdio.h>

int main() {
    int arr[50];
    int n, i;
    int totalSum = 0, arraySum = 0, missing;

    printf("Enter the maximum number in the sequence (N): ");
    scanf("%d", &n);

    printf("Enter the %d numbers:\n", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        arraySum = arraySum + arr[i];
    }

    totalSum = (n * (n + 1)) / 2;
    missing = totalSum - arraySum;

    printf("\nThe missing number is: %d\n", missing);

    return 0;
}