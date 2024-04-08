// Write a program that takes an array of integers as input. 
// For each element at an even index in the array, calculate its square, and for each element at an odd index, calculate its cube. 
// Then, calculate the difference between the sum of squares and the sum of cubes.

#include <stdio.h>
#include <stdlib.h>

int sumOfSquares(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i] * arr[i];
    }
    printf("Sum of squares is: %d\n",sum);

    return sum;
}

int sumOfCubes(int arr[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i] * arr[i] * arr[i];
    }
    printf("Sum of cubes is: %d\n",sum);

    return sum;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum_squares = sumOfSquares(arr, size);
    int sum_cubes = sumOfCubes(arr, size);
    
    int difference = sum_squares - sum_cubes;
    
    printf("Difference between the sum of squares and sum of cubes: %d\n", difference);
    
    free(arr);
    
    return 0;
}
