#include <stdio.h>
#include <stdlib.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    float average;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    average = (float)sum / size;

    return average;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("arr [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    float avg = calculateAverage(arr, size);

    printf("The average of the elements in the array is: %.2f\n", avg);

    free(arr);

    return 0;
}
