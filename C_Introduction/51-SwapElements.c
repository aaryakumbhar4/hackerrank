#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int main() {
    int n = 6;
    int *arr = (int *)malloc(n * sizeof(int)); 

    printf("Array before swapping:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    swap(arr, 0, 5);
    swap(arr, 1, 4);
    swap(arr, 2, 3);

    
    printf("\nArray after swapping:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
