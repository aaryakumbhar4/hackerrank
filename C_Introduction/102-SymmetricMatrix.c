#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Rows and columns should be equal.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1;  
    for (i = 0; i < rows && isSymmetric; i++) {
        for (j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    printf("The entered matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (isSymmetric) {
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}
