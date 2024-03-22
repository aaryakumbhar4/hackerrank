#include<stdio.h>
int main(){
    int sum = 0;

    for(int i = 0; i <= 50; i++){
        sum = sum + i * i - i + 3;
    }

    printf("Summation is:%d\n", sum);
    
    return 0;
}