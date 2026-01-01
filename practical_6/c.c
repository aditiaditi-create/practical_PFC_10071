#include <stdio.h>
// Name - Aditi Rathore
// ERP ID - 10071

int main() {
  int pin = 1234, enteredPin, attempts = 0;

  while (attempts < 3) {
    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
      printf("Authentication Successful\n");
      return 0;
    } else {
      printf("Incorrect PIN\n");
    }

    attempts++;
  }

  printf("Card Blocked. Too many incorrect attempts\n");

  return 0;
}