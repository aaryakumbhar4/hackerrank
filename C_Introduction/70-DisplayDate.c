#include <stdio.h>

struct Date {
  int day;
  int month;
  int year;
};

struct Date create(int day, int month, int year) {
  struct Date d;
  d.day = day;
  d.month = month;
  d.year = year;
  return d;
}

void display(struct Date d) {
  printf("%d/%d/%d\n", d.day, d.month, d.year);
}

int main() {
  struct Date d = create(10, 4, 2024);

  display(d);

  return 0;
}
