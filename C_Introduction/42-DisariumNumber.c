#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num = num / 10;
    }
    return count;
}

int isDisarium(int num) {
    int sum = 0;
    int temp = num;
    int digits = countDigits(num);
    
    while (temp != 0) {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
        digits--;
    }
    
    return sum == num;
}

int main() {
    printf("Disarium numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isDisarium(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
