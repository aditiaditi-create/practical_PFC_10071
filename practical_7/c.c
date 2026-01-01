#include <stdio.h>
// Aditya Singh Thakur
// RU-25-10114
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