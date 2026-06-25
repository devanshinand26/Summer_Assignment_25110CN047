#include <stdio.h>
int calculateSum(int a, int b);

int main() {
    int num1, num2,total;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    total = calculateSum(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, total);

    return 0;
}
int calculateSum(int a, int b) {
    int result = a + b;
    return result;
}