#include <stdio.h>

int main()
{
    int n, i, total = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            total += i;
    }

    if(total == n)
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}