#include <stdio.h>
// Name - Aditi Rathore
// ERPID - 10071
int main() {
  int a, b;

  printf("Enter a and b: ");
  scanf("%d %d", &a, &b);

  while (a <= b) {
    printf("%d ", a);
    a++;
  }

  return 0;
}