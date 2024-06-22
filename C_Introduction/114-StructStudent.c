#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int roll_no;
    float marks;
}; 

void addStudent(struct Student* students, int* count) {
    printf("Enter name: ");
    scanf(" %s", students[*count].name);
    printf("Enter roll number: ");
    scanf("%d", &students[*count].roll_no);
    printf("Enter marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
}

void displayStudents(struct Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %f\n", students[i].marks);
    }
}

struct Student* searchStudent(struct Student* students, int count, int roll_no) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll_no) {
            printf("Student found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll_no);
            printf("Marks: %.2f\n", students[i].marks);
        }
    }
    printf("Student with roll number %d not found.\n", roll_no);
}


void updateStudent(struct Student* students, int count, int roll_no) {
    struct Student* student = searchStudent(students, count, roll_no);
    if (student == NULL) {
        printf("Student with roll number %d not found.\n", roll_no);
        return;
    }
    printf("Enter new name: ");
    scanf(" %s", student->name);
    printf("Enter new marks: ");
    scanf("%f", &student->marks);
}

void deleteStudent(struct Student* students, int* count, int roll_no) {
    int i;

    for (i = 0; i < *count; i++) {
        if (students[i].roll_no == roll_no) {
            break;
        }
    }

    if (i == *count) {
        printf("Student with roll number %d not found.\n", roll_no);
        return;
    }

    students[i] = students[*count - 1];

    (*count)--;

    printf("Student with roll number %d has been deleted.\n", roll_no);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice, roll_no;

    while (1) {
        printf("\nStudent Record Management\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Student by Roll Number\n");
        printf("5. Delete Student by Roll Number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &roll_no);
                struct Student* student = searchStudent(students, count, roll_no);
                if (student) {
                    printf("Student found:\n");
                    printf("Name: %s\n", student->name);
                    printf("Roll Number: %d\n", student->roll_no);
                    printf("Marks: %f\n", student->marks);
                } else {
                    printf("Student with roll number %d not found.\n", roll_no);
                }
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &roll_no);
                updateStudent(students, count, roll_no);
                break;
            case 5:
                printf("Enter roll number to delete: ");
                scanf("%d", &roll_no);
                deleteStudent(students, &count, roll_no);
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
