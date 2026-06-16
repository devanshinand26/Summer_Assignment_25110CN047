#include<stdio.h>
int main()
{
    int i,num;
    //Take the number as input from the user
    printf("Enter the value of the number:");  
    scanf("%d",&num);
    printf("Multiplication table of %d is:\n",num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
return 0;
}