#include <stdio.h>

int main() {
int dec,bin = 0, rem, place = 1;

printf("enter decimal number: ");
scanf("%d", &dec);

while (dec > 0) {
    rem = dec % 2; 
    
    bin = bin + (rem * place); 
    place = place * 10;       
    
       dec = dec / 2; 
}

printf("binary value: %d\n", bin);

return 0;
}