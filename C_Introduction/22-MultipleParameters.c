#include<stdio.h>
int sum(int a, int b){
        return a + b;
    }
int main(){

    int a;
    int b;

    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);

    int result = sum(a,b);

    printf("Summation of %d and %d is %d", a, b, result);

    return 0;
}