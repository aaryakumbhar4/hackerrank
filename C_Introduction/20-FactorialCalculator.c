#include<stdio.h>
int main(){

    int num;
    int fact = 1;
    int i = 1;

    printf("Enter number:");
    scanf("%d", &num);

    while(i <= num){
        fact = fact * i;
        i = i + 1;
    }

    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}