#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void SearchElement(int* arr,int size,int S_element){
    int StartIndex = -1;
    int EndIndex = -1;

    for(int i = 0; i < size; i++){
        if(arr[i] == S_element){
            StartIndex = i;
        }
    }

    for(int i = size - 1; i >= 0; i--){
        if(arr[i] == S_element){
            EndIndex = size - 1 - i;
        }
    }

    if(StartIndex != -1){
        printf("Index of %d from starting: %d\n",S_element,StartIndex);
    } else{
        printf("%d is not found.",S_element);
    }

    if(EndIndex != -1){
        printf("Index of %d from ending: %d\n",S_element,EndIndex);
    } else{
        printf("%d is not found.",S_element);
    }

}
int main(void){
    srand(time(NULL));

    int size;
    printf("Enter size of element:\n");
    scanf("%d", &size);

    int* arr = (int *)malloc(size * (sizeof (int)));
    if(arr == NULL){
        printf("Memory allocation is failed...");
    }

    printf("Array is:\n");
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
        printf("%d\n",arr[i]);
    }

    int S_element;
    printf("Enter search element:");
    scanf("%d", &S_element);

    SearchElement(arr,size,S_element);

    return 0;
}