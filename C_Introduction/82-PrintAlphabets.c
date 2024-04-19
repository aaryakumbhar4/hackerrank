#include <stdio.h>

int main() {
  char alphabets[26]; 
  char *ptr = alphabets; 

  for (int i = 0; i < 26; i++) {
    *ptr = 'A' + i;
    ptr++;
  }

  ptr = alphabets;

  printf("The alphabets are: ");
  for (int i = 0; i < 26; i++) {
    printf("%c ", *ptr);
    ptr++;
  }
  printf("\n");

  return 0;
}