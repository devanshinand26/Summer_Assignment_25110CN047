#include <stdio.h>

int main() {
int num,count = 0;

printf("enter your number: ");
scanf("%d", &num);

while (num > 0) {
    int rem = num % 2; 
    
    if (rem == 1) {
        count = count + 1; 
    }
    
      num = num / 2; 
}

printf("total set bits = %d\n", count);

return 0;
}