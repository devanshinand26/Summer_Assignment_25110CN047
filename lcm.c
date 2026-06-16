#include <stdio.h>

int main()
{
    int a, b, x, y, t;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0)
    {
        t = y;
        y = x % y;
        x = t;
    }

    int lcm = (a * b) / x;

    printf("lcm = %d", lcm);

    return 0;
}