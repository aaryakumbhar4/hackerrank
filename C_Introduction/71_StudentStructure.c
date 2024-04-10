#include <stdio.h>

struct Student {
  char name[15];
  int roll_number;
  int marks[5];
};

int main() {
  struct Student s[3];
  int i, j;

  for (i = 0; i < 3; i++) {
    printf("Enter details for student %d:\n", i+1);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Roll number: ");
    scanf("%d", &s[i].roll_number);
    printf("Marks: ");
    for (j = 0; j < 5; j++) {
      scanf("%d", &s[i].marks[j]);
    }
  }

  printf("Student details:\n");
  for (i = 0; i < 3; i++) {
    printf("Student %d:\n", i+1);
    printf("Name: %s\n", s[i].name);
    printf("Roll number: %d\n", s[i].roll_number);
    printf("Marks: ");
    for (j = 0; j < 5; j++) {
      printf("%d\n", s[i].marks[j]);
    }
  }

  return 0;
}