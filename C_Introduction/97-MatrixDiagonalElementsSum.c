#include <stdio.h>

void printMatrix(int matrix[100][100], int m, int n) {
    printf("Matrix representation is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, sum = 0, matrix[100][100]; 

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    if (m != n) {
        printf("Matrix must be square for diagonal sum.\n");
        return 1; 
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printMatrix(matrix, m, n);

    for (int i = 0; i < m; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}