#include <stdio.h>

int main() {
int i,j,lines;

printf("Enter how many lines: ");
scanf("%d", &lines);

for (i = lines; i>= 1; i--) {
    

    for (j = 1; j<= i; j++) {
        printf("*");
    }
    
       printf("\n");
}

return 0;
}