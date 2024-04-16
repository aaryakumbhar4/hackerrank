#include <stdio.h>

struct Student {
  int id;
  char name[15];
  float grade;
};

void print_student_details(struct Student student) {
  printf("ID: %d\n", student.id);
  printf("Name: %s\n", student.name);
  printf("Grade: %f\n\n", student.grade);
}

int main() {

  struct Student students[2];

  for (int i = 0; i < 2; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &students[i].id);
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("Grade: ");
    scanf("%f", &students[i].grade);
  }

  printf("\nStudent details:\n\n");
  for (int i = 0; i < 2; i++) {
    print_student_details(students[i]);
  }

  return 0;
}