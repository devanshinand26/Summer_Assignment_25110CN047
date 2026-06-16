#include<stdio.h>
int main()
{
    int num, i, prime=1;
    printf("Enter a number:\n");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("Not a prime number");
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("Prime number");
    }
    return 0;

}