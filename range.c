#include<stdio.h>
int main()
{
    int i,num,a,b,factors;
    printf("Enter the starting and ending number: ");
    scanf("%d %d",&a,&b); 
    printf("Prime numbers are:\n");
    for( num=a;num<=b;num++)
    {
        factors=0;
        
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                factors++;
            }
        }

        if(factors==2){
            
            printf("%d\n",num);
        }
    }
    return 0;
}