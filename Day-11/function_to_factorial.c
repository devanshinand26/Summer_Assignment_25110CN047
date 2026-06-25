#include <stdio.h>
int calculateFactorial(int num);

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = calculateFactorial(number);

    printf("The factorial of %d is: %d\n", number, result);

    return 0;
}
int calculateFactorial(int num) {
    int fact = 1;
    int i;
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    return fact;
}