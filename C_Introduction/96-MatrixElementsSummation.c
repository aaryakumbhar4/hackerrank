#include <stdio.h>

int calculateSum(int matrix[100][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum = sum + matrix[i][j];
        }
    }
    return sum;
}

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
    int m, n, matrix[100][100];

    printf("Enter the number of rows : ");
    scanf("%d", &m);

    printf("Enter the number of columns : ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printMatrix(matrix, m, n);
    int sum = calculateSum(matrix, m, n);
    printf("Sum of all elements in matrix is: %d\n", sum);

    return 0;
}
