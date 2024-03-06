#include <stdio.h>

int isKaprekar(int num) {
    int square = num * num;
    int cnt = 0, divisor = 1;
    
    for (int n = square; n > 0; ) {
        n = n / 10;
        cnt++;
    }
    
    for (int i = 1; i < cnt; i++) {
        divisor = divisor * 10;
        int sum = square / divisor + square % divisor;
        if (sum == num)
            return 1; 
    }
    return 0; 
}

int main() {
    printf("Kaprekar numbers from 1 to 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isKaprekar(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
