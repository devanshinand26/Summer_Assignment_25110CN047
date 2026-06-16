#include<stdio.h>
int main()
{
    int r,num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("Reversed number: %d", rev);

    return 0;
}