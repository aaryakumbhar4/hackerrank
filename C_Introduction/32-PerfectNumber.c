
#include<stdio.h>
int perfectnumber(int num){
    int sum = 0;
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }

    if(sum == num){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    if(num < 1){
        printf("Enter positive number");
        return 1;
    }

    if(perfectnumber(num)){
        printf("%d is perfect number\n",num);
    } else{
        printf("%d is not perfect number\n",num);
    }
    return 0;
}