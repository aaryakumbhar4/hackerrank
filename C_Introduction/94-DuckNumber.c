#include <stdio.h>

int main() {
  int num, originalNumber, remainder;

  printf("Enter a number: ");
  scanf("%d", &num);

  originalNumber = num;

  while (num > 0) {
    remainder = num % 10;
    if (remainder == 0) {
      printf(" %d is a Duck Number.\n", originalNumber);
      return 0;
    }
    num /= 10;
  }

  printf(" %d is not a Duck Number.\n", originalNumber);

  return 0;
}
