#include<stdio.h>
int factorial(int num){
    int i = 1;
    int fact = 1;
    while(i <= num){
        fact = fact * i;
        i = i + 1;
    }
    return fact;
}
int strongnumber(int num){
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }
    return (sum == originalNum);
}
int main(){
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    if(num < 1){
        printf("Enter positive number");
        return 1;
    }

    if(strongnumber(num)){
        printf("%d is strong number", num);
    } else{
        printf("%d is not strong number", num);
    }

    return 0;
}