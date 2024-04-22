#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

void sort_by_salary(struct Employee* employees, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (employees[j].salary > employees[j + 1].salary) {
        struct Employee temp = employees[j];
        employees[j] = employees[j + 1];
        employees[j + 1] = temp;
      }
    }
  }
}

int main() {
  int num_employees;

  printf("Enter the number of employees: ");
  scanf("%d", &num_employees);

  struct Employee* employees = (struct Employee*)malloc(num_employees * sizeof(struct Employee));

  if (employees == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  for (int i = 0; i < num_employees; i++) {
    printf("Enter details for employee %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &employees[i].id);
    printf("Name: ");
    scanf("%s", employees[i].name);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
  }

  sort_by_salary(employees, num_employees);

  printf("\nEmployee Details Sorted by Salary:\n");
  for (int i = 0; i < num_employees; i++) {
    printf("ID: %d\t Name: %s\t Salary: %f\n", employees[i].id, employees[i].name, employees[i].salary);
  }

  free(employees);

  return 0;
}
