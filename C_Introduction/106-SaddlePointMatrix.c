#include <stdio.h>

int main() {
    int rows, cols, i, j, min_index = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

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
        for (j = 1; j < cols; j++) {
            if (matrix[i][j] < matrix[i][min_index]) {
                min_index = j;
            }
        }

        int saddle_point = 1;
        for (j = 0; j < rows; j++) {
            if (matrix[j][min_index] > matrix[i][min_index]) {
                saddle_point = 0;
                break;
            }
        }

        if (saddle_point) {
            printf("Saddle point: %d at (%d, %d)\n", matrix[i][min_index], i, min_index);
            return 0;
        }
    }

    return 0;
}
