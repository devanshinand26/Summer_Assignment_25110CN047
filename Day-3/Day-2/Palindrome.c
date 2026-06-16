#include<stdio.h>
int main()
{
    int n,rev=0,r,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {       
         r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
        printf("This number is a palindrome.");
    else
        printf("This number is not a palindrome.");
    return 0;
}