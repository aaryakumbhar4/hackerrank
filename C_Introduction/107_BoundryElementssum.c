#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;

    for (j = 0; j < cols; j++) {
        sum1 = sum1 + matrix[0][j];
    }

    for (j = 0; j < cols; j++) {
        sum2 = sum2 + matrix[rows - 1][j];
    }

    for (i = 1; i < rows - 1; i++) {
        sum3 = sum3 + matrix[i][0];
    }

    for (i = 1; i < rows - 1; i++) {
        sum4 = sum4 + matrix[i][cols - 1];
    }

    int sum = sum1 + sum2 + sum3 + sum4;

    printf("Sum of boundary elements: %d\n", sum);

    return 0;
}
