#include <stdio.h>
#include <stdlib.h>

void rotateArray(int *arr, int n, int d) {
    int *temp = (int *)malloc(d * sizeof(int));

    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];

    free(temp);
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
}

int main() {
    int n, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, d);

    printf("Rotated array: ");
    printArray(arr, n);

    free(arr);

    return 0;
}
