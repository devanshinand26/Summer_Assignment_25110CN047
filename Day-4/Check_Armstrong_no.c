#include <stdio.h>

int main()
{
    int n, rem, sum = 0, temp;

    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == n)
        printf("%d is armstrong number", n);
    else
        printf("%d is not armstrong number", n);

    return 0;
}