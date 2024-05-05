#include <stdio.h>

struct Book {
  char title[50];
  char author[50];
  float price;
};

int main() {
  struct Book book[3];
  int i, mostExpensive = 0, lowestPrice = 0;

  for (i = 0; i < 3; i++) {
    printf("\nEnter details for book %d:\n", i + 1);
    printf("Title: ");
    scanf("%s", book[i].title); 

    printf("Author: ");
    scanf("%s", book[i].author); 

    printf("Price: ");
    scanf("%f", &book[i].price);
  }

  for (i = 1; i < 3; i++) {
    if (book[i].price > book[mostExpensive].price) {
      mostExpensive = i;
    }
    if (book[i].price < book[lowestPrice].price) {
      lowestPrice = i;
    }
  }

  printf("\nMost expensive book:\n");
  printf("Title: %s", book[mostExpensive].title);
  printf("Author: %s", book[mostExpensive].author);
  printf("Price: %.2f\n", book[mostExpensive].price);

  printf("\nLowest priced book:\n");
  printf("Title: %s", book[lowestPrice].title);
  printf("Author: %s", book[lowestPrice].author);
  printf("Price: %.2f\n", book[lowestPrice].price);

  return 0;
}