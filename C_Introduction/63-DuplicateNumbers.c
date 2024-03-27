#include<stdio.h>
#include<stdlib.h>

int duplicate(int *arr,int size){
    int i;
    int j;
    int count = 0;
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Total no of Duplicate numbers found in array is: %d", count);

    return count;
}
int main(void){
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed...");
    } 

    printf("Enter elements in array:");
    for(int i = 0;i < size; i++){
        scanf("%d", &arr[i]);
    }

    duplicate(arr,size);

    return 0;
}