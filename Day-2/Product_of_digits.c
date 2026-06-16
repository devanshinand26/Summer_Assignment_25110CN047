#include<stdio.h>
int main()
{
    int a, product = 1,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        product=product*r;
        a=a/10;
    }
    printf("Product of digits: %d", product);
    return 0;
}