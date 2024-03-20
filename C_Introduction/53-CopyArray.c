
#include<stdio.h>
#include<stdlib.h>

int* copyArray(int *arrOri, int size){ 
    int *arrCpy = (int*)malloc(size * sizeof(int));
      if(arrCpy == NULL){
        printf("Memory allocation is failed....");
        exit(1);
    }
    for(int i = 0; i < size; i++){
        arrCpy[i] = arrOri[i];
    }
    return arrCpy;
}
int main(void){

    int size;
    
    printf("Enter the size of array:");
    scanf("%d", &size);

    int *arrOri = (int*)malloc(size * sizeof(int));
    if(arrOri == NULL){
        printf("Memory allocation is failed...");
        return -1;
    }

    printf("Enter %d elements in array:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arrOri[i]);
    }

    int *arrCpy = copyArray(arrOri, size);

    printf("Copied elements in arrCpy:\n");
    for(int i = 0; i < size; i++){
        printf("%d\n", arrCpy[i]);
    }

    printf("\n");

    free(arrOri);
    free(arrCpy);

    return 0;
}