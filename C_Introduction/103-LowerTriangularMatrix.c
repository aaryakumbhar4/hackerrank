#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Rows and columns should be equal.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i < j) {
                matrix[i][j] = 0;
            }
        }
    }

    printf("Lower triangular matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}