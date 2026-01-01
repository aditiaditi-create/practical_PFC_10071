#include <stdio.h>
// Name - Aditya Singh Thakur
// ERPID - RU -25-10114
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