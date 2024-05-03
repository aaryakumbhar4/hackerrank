
#include <stdio.h>

int isUgly(int num) {
    if (num <= 0) {
        return 0;
    }
    while (num % 2 == 0) {
        num = num / 2;
    }
    while (num % 3 == 0) {
        num = num / 3;
    }
    while (num % 5 == 0) {
        num = num / 5;
    }

    return num == 1;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isUgly(num)) {
        printf("%d is an ugly number.\n", num);
    } else {
        printf("%d is not an ugly number.\n", num);
    }

    return 0;
}
