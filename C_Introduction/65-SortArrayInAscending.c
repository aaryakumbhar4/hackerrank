#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort_elements_in_ascending(int *arr,int size){
    int i,j,k,temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);

    int *arr = (int *)malloc(size* (sizeof(int)));
    if(arr == NULL){
        printf("Memory allocation is failed...");
    }

    srand(time(NULL));
    
    printf("Randomly generated array:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("%d\n", arr[i]);
    }

    sort_elements_in_ascending(arr,size);

    printf("Elements of array sorted in ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}