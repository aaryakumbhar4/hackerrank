
#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}    

int sumOfPrimeFactors(int n) {
    int sum = 0;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && isPrime(i)) {
            sum = sum + sumOfDigits(i);
            n = n / i;
        }
    }
    return sum;
}

int isSmith(int n) {
    if (isPrime(n)) {
        return 0; 
    }
    return sumOfDigits(n) == sumOfPrimeFactors(n);
}

int main() {
    printf("Smith numbers from 1 to 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isSmith(i)) {
            printf("%d\t", i);
        }
    }
    return 0;
}
