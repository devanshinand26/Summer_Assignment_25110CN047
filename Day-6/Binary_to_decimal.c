#include <stdio.h>

int main() {
int bin, rem, dec = 0, base = 1; 

printf("enter binary number-\n ");
scanf("%d", &bin);

while (bin > 0) {
    rem = bin % 10; 
    dec = dec + (rem * base); 
    base = base * 2; 
    bin = bin / 10; 
}

printf("decimal is: %d\n", dec);

return 0;
}