#include<stdio.h>
void CheckEvenOdd(int num){
    if(num % 2 == 0){
        printf("Even number");
    } else{
        printf("Odd number");
    }
}
int main(){
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    CheckEvenOdd(num);

    return 0;
}