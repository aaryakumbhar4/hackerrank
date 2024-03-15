#include <stdio.h>

int Neon(int num) {
    int square = num * num;
    int sum = 0;
    
    while (square > 0) {
        sum = sum + square % 10;
        square = square / 10;
    }
    return sum == num;
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } 

    if (Neon(num)) {
        printf("%d is a Neon number.\n", num);
    } else {
        printf("%d is not a Neon number.\n", num);
    }
    
    return 0;
}
