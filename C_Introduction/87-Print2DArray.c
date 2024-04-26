#include <stdio.h>
#include <stdlib.h>

void print_2d_array(int *arr, int rows, int cols) {

    printf("Elements of the 2D array:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i * cols + j]); 
        }
        printf("\n");
    }
}

int main() {
    int rows, colm;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &colm);

    int *arr = (int *)malloc(rows * colm * sizeof(int)); 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows * colm; i++) {
        scanf("%d", &arr[i]);
    }

    print_2d_array(arr, rows, colm);

    free(arr);  

    return 0;
}