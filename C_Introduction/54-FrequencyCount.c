
#include<stdio.h>
#include<stdlib.h>

#define range 100

void countFrequency(int *arr, int size){
    int *frequency = (int *)calloc(range, sizeof(int));
    if(frequency == NULL){
        printf("Memory allocation is failed...");
        exit(1);
    }

    for(int i = 0; i < size; i++){
        frequency[arr[i]]++;
    }

    printf("Frequency of elements is:\n");
    for(int i = 0; i < range; i++){
        if(frequency[i] != 0){
            printf("%d   %d\n", i, frequency[i]);
        }
    }

    free(frequency);

}
int main(void){
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation is failed...");
        return 1;
    }

    printf("Enter %d elements of array:\n",size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    countFrequency(arr,size);

    free(arr);

    return 0;
}
