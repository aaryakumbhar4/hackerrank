#include <stdio.h>

int SpyNumber(int num) {
    int sum = 0, product = 1;
    int rem;

    while (num > 0) {
        rem = num % 10;
        sum = sum + rem;
        product = product * rem;
        num = num / 10;
    }

    if (sum == product){
        return 1;
    } else{
        return 0;
    }
       
}

int main() {
    printf("Spy numbers from 1 to 1000:\n");
    for (int i = 1; i <= 10000; i++) {
        if (SpyNumber(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
