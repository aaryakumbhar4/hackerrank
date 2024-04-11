#include <stdio.h>

int main() {

    struct Data {
        char letter;
        short age;
        int salary;
        long student_count;
        float average;
        double pi;
    };

    struct Data d[1];

    d[0].letter = 'A';
    d[0].age = 25;
    d[0].salary = 50000;
    d[0].student_count = 1000000;
    d[0].average = 15.276;
    d[0].pi = 3.14;

    for (int i = 0; i < 1; i++) {
        printf("  Letter: %c\n", d[i].letter);
        printf("  Age: %hd\n", d[i].age);
        printf("  Salary: %d\n", d[i].salary);
        printf("  Student count: %ld\n", d[i].student_count);
        printf("  Average: %.4f\n", d[i].average);
        printf("  Pi : %.15lf\n", d[i].pi);
    }

    return 0;
}

