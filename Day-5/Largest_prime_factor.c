#include <stdio.h>

int main() {
int num;
int max = -1;

printf("Enter number: ");
scanf("%d", &num);

while (num % 2 == 0) {
    max = 2;
    num = num / 2;
}

  
  for (int i = 3; i * i <= num; i = i + 2) {
      while (num % i == 0) {
          max = i;
          num = num / i; 
     }
  }


if (num > 2) {
    max = num;
}

printf("biggest prime factor is %d\n", max);

return 0;
}