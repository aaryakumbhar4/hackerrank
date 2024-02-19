#include<stdio.h>
int main(){
    int numbers[] = {1,-2,3,-4,5,6,-7,-8,9,10};
    int count = 0;
    int size = 10;
    int i = 0;

    for(i = 0; i < size; i++){
        if(numbers[i] > 0){
            count++;
        }
    }

    printf("Count of positive numbers is:%d\n", count);

    return 0;
}