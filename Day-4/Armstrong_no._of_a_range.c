#include <stdio.h>

int main()
{
    int start, end, num, temp, rem, digits, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    for(num = start; num <= end; num++)
    {
        temp = num;
        digits = 0;
        sum = 0;

        // first count how many digits the number has
        while(temp != 0)
        {
            temp = temp / 10;
            digits++;
        }

        temp = num; // reset temp again to use it below

        // now find sum of (each digit ^ number of digits)
        while(temp != 0)
        {
            rem = temp % 10;

            int power = 1;
            for(int i = 0; i < digits; i++)
            {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}