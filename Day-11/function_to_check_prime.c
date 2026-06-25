#include <stdio.h>
int checkPrime(int num);

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = checkPrime(number);
    if (result == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
int checkPrime(int num) {
    int i;
    if (num <= 1) {
        return 0; 
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}