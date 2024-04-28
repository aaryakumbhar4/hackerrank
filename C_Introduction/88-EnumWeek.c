#include <stdio.h>

enum DayOfWeek { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    int dayNum;

    printf("Enter a number between 1 and 7 representing the day of the week: ");
    scanf("%d", &dayNum);

    if (dayNum < 1 || dayNum > 7) {
        printf("Please enter a number between 1 and 7.");
        return 1;
    }

    switch (dayNum) {
        case Sunday:
            printf("The day is Sunday.\n");
            break;
        case Monday:
            printf("The day is Monday.\n");
            break;
        case Tuesday:
            printf("The day is Tuesday.\n");
            break;
        case Wednesday:
            printf("The day is Wednesday.\n");
            break;
        case Thursday:
            printf("The day is Thursday.\n");
            break;
        case Friday:
            printf("The day is Friday.\n");
            break;
        case Saturday:
            printf("The day is Saturday.\n");
            break;
    }

    return 0;
}
