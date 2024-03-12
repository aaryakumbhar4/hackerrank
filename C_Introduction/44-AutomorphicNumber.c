#include <stdio.h>

int Automorphic(int n) {
    int square = n * n;
    while (n > 0) {
        if (n % 10 != square % 10) {
            return 0;
        }
        n = n / 10;
        square = square / 10;
    }
    return 1;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (Automorphic(num)) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}
