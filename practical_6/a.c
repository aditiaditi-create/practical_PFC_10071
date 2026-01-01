#include <stdio.h>
// Name - Aditya Singh Thakur
// ERP ID - RU-25-10114
int main() {
  int i, n, sum = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (i % 2 != 0)
      continue;

    sum = sum + i;
  }

  printf("Sum of even numbers = %d\n", sum);

  return 0;
}