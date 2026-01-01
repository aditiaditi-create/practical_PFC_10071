#include <stdio.h>
// Aditi Rathore
// ERP ID - 10071
int main() {
  int i, j;

  for (i = 1; i <= 4; i++) {
    for (j = 0; j < i; j++) {
      printf("%c", 'A' + j);
    }
    printf("\n");
  }

  return 0;
}