#include<stdio.h>
int SumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        num = num % 10;
        sum = sum + num;
        num = num / 10;
    }
    return sum;
}

int HarshadNo(int num){
    int sum = SumOfDigits(num);
    if(num % sum == 0){
        return 1;
    } else{
        return 0;
    }
}

int main(void){
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    if(num < 1){
        printf("Enter positive integer.");
    }

    if(HarshadNo(num)){
        printf("%d is Harshad number.", num);
    } else{
        printf("%d is not Harshad number.", num);
    }
    return 0;
}