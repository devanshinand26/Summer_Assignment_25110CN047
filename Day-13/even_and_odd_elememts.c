#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int even = 0, odd = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}