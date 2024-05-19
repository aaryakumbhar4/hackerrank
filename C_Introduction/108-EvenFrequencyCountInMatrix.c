#include <stdio.h>

int main() {
    int rows, cols, i, j, evenCnt = 0;
    int matrix[10][10];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

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

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCnt++;
            }
        }
    }

    printf("The frequency of even numbers in the matrix is: %d\n", evenCnt);

    return 0;
}
