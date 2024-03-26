#include <stdio.h>
#include <stdlib.h>

int OddNumbers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int oddnum = OddNumbers(arr, size);
    printf("Number of odd numbers in the array: %d\n", oddnum);

    free(arr);
    
    return 0;
}