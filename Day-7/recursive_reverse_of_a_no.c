#include <stdio.h>

int reverse(int num, int rev)
{
    if(num == 0)
        return rev;

    rev = rev * 10 + num % 10;
    return reverse(num / 10, rev);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number: %d\n", reverse(n, 0));

    return 0;
}
