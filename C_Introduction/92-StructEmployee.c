#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    char state[50];
    char zipcode[20];
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Address address;
};

void inputEmployee(struct Employee *emp) {
    printf("Enter employee details:\n");
    printf("Employee ID: ");
    scanf("%d", &emp->id);
    printf("Name: ");
    scanf("%s", emp->name);
    printf("Salary: ");
    scanf("%f", &emp->salary);

    printf("Enter address details:\n");
    printf("Street: ");
    scanf("%s", emp->address.street);
    printf("City: ");
    scanf("%s", emp->address.city);
    printf("State: ");
    scanf("%s", emp->address.state);
    printf("Zipcode: ");
    scanf("%s", emp->address.zipcode);
}

void displayEmployee(struct Employee *emp) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);
    printf("Address:\n");
    printf("Street: %s\n", emp->address.street);
    printf("City: %s\n", emp->address.city);
    printf("State: %s\n", emp->address.state);
    printf("Zipcode: %s\n", emp->address.zipcode);
}

int main() {
    int numEmp;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmp);

    struct Employee employees[numEmp];

    for (int i = 0; i < numEmp; i++) {
        printf("\nEmployee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }

    for (int i = 0; i < numEmp; i++) {
        printf("\nEmployee %d Details:\n", i + 1);
        displayEmployee(&employees[i]);
    }

    return 0;
}
