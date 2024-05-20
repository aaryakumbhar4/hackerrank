#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int rollNumber;
    int marks[3];
    int totalMarks;
    float averageMarks;
    char grade;
} Student;

void calculateTotalAndAverage(Student *student) {
    student->totalMarks = student->marks[0] + student->marks[1] + student->marks[2];
    student->averageMarks = student->totalMarks / 3.0;

    if (student->averageMarks >= 90) {
        student->grade = 'A';
    } else if (student->averageMarks >= 80) {
        student->grade = 'B';
    } else if (student->averageMarks >= 70) {
        student->grade = 'C';
    } else if (student->averageMarks >= 60) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

void inputStudentDetails(Student *student) {
    printf("Enter name: ");
    scanf(" %[^\n]", student->name);
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);
    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &student->marks[i]);
    }
    calculateTotalAndAverage(student);
}

void displayStudentDetails( Student *student) {
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks: %d, %d, %d\n", student->marks[0], student->marks[1], student->marks[2]);
    printf("Total Marks: %d\n", student->totalMarks);
    printf("Average Marks: %.2f\n", student->averageMarks);
    printf("Grade: %c\n", student->grade);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEntering details for student %d:\n", i + 1);
        inputStudentDetails(&students[i]);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudentDetails(&students[i]);
    }

    free(students);

    return 0;
}
