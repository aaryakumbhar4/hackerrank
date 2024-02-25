#include<stdio.h>
int Even(int num){
    return num % 2 == 0;
}

int MultipleOf5(int num){
    return num % 5 == 0;
}
int SumOfEvenNumber(int start,int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        if(Even(i)){
            printf("%d is even number.",i);
            if(MultipleOf5(i)){
                printf("%d is multiple of 5\n",i);
            }
            else{
                printf("%d is not multiple of 5\n",i);
            }
            sum = sum + i;
        }
    }
    return sum;
}
int main(){
    int start;
    int end;

    printf("Enter start number:");
    scanf("%d", &start);
    printf("Enter end number:");
    scanf("%d", &end);

    int result = SumOfEvenNumber(start,end);
    printf("Summation of %d to %d even numbers is %d\n",start,end,result);

    return 0;
}