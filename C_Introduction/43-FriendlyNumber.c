#include <stdio.h>

int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

int Friendly(int num1, int num2) {
    return sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }
    
    if (Friendly(num1, num2)) {
        printf("%d and %d are Friendly numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not Friendly numbers.\n", num1, num2);
    }
    
    return 0;
}