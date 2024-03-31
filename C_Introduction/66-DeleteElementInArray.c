#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* deleteElement(int *arr, int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position\n");
        return arr; 
    }

    int newSize = size - 1;

    int *newArr = (int*)malloc(newSize * sizeof(int));
    if (newArr == NULL) {
        printf("Memory allocation failed...\n");
        return arr; 
    }

    for (int i = 0, j = 0; i < size; i++) {
        if (i != position) {
            newArr[j] = arr[i];
            j++;
        }
    }

    free(arr);

    return newArr;
}

int main(void) {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed...\n");
        return 1;
    }

    srand(time(NULL)); 

    printf("Randomly generated array:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; 
        printf("%d\n", arr[i]);
    }

    int position;
    printf("Enter the position of element to delete : ");
    scanf("%d", &position);

    arr = deleteElement(arr, size, position);

    printf("Array after deletion:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d\n", arr[i]);
    }
   
    free(arr);

    return 0;
}
