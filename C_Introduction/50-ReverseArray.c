#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr1, int size) {
    int *arr2 = (int *)malloc(size * sizeof(int));

    if (arr2 == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = size - 1, j = 0; i >= 0; i--, j++) {
        arr2[j] = arr1[i];
    }

    for (int i = 0; i < size; i++) {
        arr1[i] = arr2[i];
    }

    free(arr2);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr1 = (int *)malloc(size * sizeof(int));

    if (arr1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    reverseArray(arr1, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    
    free(arr1); 

    return 0;
}
