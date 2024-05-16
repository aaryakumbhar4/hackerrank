#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10]; 
    int sum = 0, product = 1;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
            product = product + matrix[i][j];
        }
    }
    
    int difference = sum - product;
    printf("Sum of elements: %d\n", sum);
    printf("Product of elements: %d\n", product);
    printf("Difference between sum and product: %d\n", difference);

    return 0;
}
