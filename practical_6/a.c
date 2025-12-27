#include <stdio.h>
// Name - Aditi Rathore
// ERP ID - RU-25-10071
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