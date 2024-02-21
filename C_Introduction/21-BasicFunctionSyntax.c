#include<stdio.h>

int square(int n){
    return n * n;
}

int main(){
    int n;

    printf("Enter number:");
    scanf("%d", &n);

    int result = square(n);

    printf("The square of %d is %d", n, result);

    return 0;
}