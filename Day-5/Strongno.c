#include <stdio.h>

int main() {
int n, org, r, s = 0;

printf("enter a number: ");
scanf("%d", &n);

org = n; 

while (n > 0) {
    r = n % 10; 

    int f = 1;
    for (int i = 1; i <= r; i++) {
f = f * i;
    }

      s = s + f; 
    n = n / 10;
}

if (s == org) {
printf("%d is a strong number\n", org);
} 
else {
    printf("%d is not a strong number\n", org);
}

return 0;
}