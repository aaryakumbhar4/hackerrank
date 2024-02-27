#include<stdio.h>
#include<math.h>
void factorial(int num){
    int i = 1;
    int fact = 1;
    while(i <= num){
        fact = fact * i;
        i = i + 1;
    }
    printf("Factorial of %d is %d\n",num,fact);
}

int main(){
    int num;
    printf("Enter integer:");
    scanf("%d", &num);

    factorial(num);

    for(int i = 1;i <= num; i++){
        int sqrt_i = sqrt(i);
        if(sqrt_i * sqrt_i == i){
        printf("%d is perfect square\n", i);
    } else{
        printf("%d is not perfect square\n", i);
    }
    }
    return 0;
}