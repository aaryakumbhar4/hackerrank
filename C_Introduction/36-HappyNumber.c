#include<stdio.h>
int HappyNumber(int num) {
    int sum = 0;
    while (num > 0) {
        int rem = num % 10;
        sum = sum + rem * rem;
        num = num / 10;
    }
    return sum;
}

int main(void){
    printf("Happy numbers from 1 to 500 are:\n");
    for (int i = 1; i <= 500; i++) {
        int num = i;
        while (num != 1 && num != 4) {
            num = HappyNumber(num);
        }
        if (num == 1)
            printf("%d\n", i);
    }
    return 0;
}