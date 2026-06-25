#include <stdio.h>

// Declare the function first so the program knows about it
int findMax(int a, int b);

int main() {
    int first, second, maximum;
    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);
    maximum = findMax(first, second);
    printf("The biggest number is: %d\n", maximum);
    return 0;
}
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}