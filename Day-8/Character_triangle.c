#include <stdio.h>
int main() {
int i,j,r;
char ch;

printf("enter number of rows: ");
scanf("%d", &r);

for (i = 1; i <= r; i++) {
    ch = 'A'; 
    for (j = 1; j <= i; j++) {
        printf("%c", ch);
        ch++; 
    }
       printf("\n");
}

return 0;
}