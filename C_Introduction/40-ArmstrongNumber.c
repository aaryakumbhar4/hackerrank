#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num = num / 10;
        count++;
    }
    return count;
}

int Armstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    n = countDigits(num);

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result = result + pow(remainder, n);
        originalNum = originalNum /10;
    }
    if (result == num)
        return 1;
    else
        return 0;
}

int main() {
    printf("Armstrong numbers from 1 to 1000:\n");
    for (int i = 1; i <= 10000; i++) {
        if (Armstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
