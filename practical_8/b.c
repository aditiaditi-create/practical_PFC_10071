#include <stdio.h>
// Aditi Rathore
// ERP ID - 10071
void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x, y;

  scanf("%d %d", &x, &y);

  swap(&x, &y);

  printf("%d %d", x, y);

  return 0;
}