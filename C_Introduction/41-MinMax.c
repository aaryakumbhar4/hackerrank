#include <stdio.h>
#include <stdlib.h>

int findmax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findmin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = findmax(arr, n);
    int min = findmin(arr, n);
    
    printf("Max number: %d\n", max);
    printf("Min number: %d\n", min);
    
    free(arr);
    
    return 0;
}
