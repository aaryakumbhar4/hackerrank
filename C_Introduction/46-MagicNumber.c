#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int isMagicNumber(int num) {
    while (num > 9) {
        num = sumOfDigits(num);
    }
    return (num == 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
    }  
    
    if (num < 10 && num > 0) {
        printf("%d is a magic number.\n", num);
    } else if (isMagicNumber(num)) {
        printf("%d is a magic number.\n", num);
    } else {
        printf("%d is not a magic number.\n", num);
    }

    return 0;
}