#include<stdio.h>
int fact(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * fact(n - 1); 
    }
}
int main() {
    int numb,result;
    printf("Enter a number: ");
    scanf("%d", &numb);
    
    if (numb < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = fact(numb);
        printf("Factorial of %d is %d\n", numb, result);
    }
    
    return 0;
}