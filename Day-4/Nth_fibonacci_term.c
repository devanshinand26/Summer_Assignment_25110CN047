#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("enter n: ");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("answer = 0");
    }
    else if(n == 2)
    {
        printf("answer = 1");
    }
    else
    {
        for(i = 2; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("answer = %d", b);
    }

    return 0;
}