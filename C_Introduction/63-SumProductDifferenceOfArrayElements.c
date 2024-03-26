
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int product(int* arr, int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product = product * arr[i];
    }
    printf("product is:%d\n",product);
    return product;
}

int sum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    printf("sum is:%d\n",sum);
    return sum;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    srand(time(NULL));
    
    printf("Randomly generated array:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("%d\n", arr[i]);
    }
    
    int prod = product(arr, size);
    int summation = sum(arr, size);
    
    int difference = prod - summation;
    
    printf("Difference between product and summation: %d\n", difference);
    
    free(arr);
    
    return 0;
}