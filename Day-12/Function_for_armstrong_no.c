#include <stdio.h>

int armstrong(int n)
{
    int temp = n, sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    return temp == sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}