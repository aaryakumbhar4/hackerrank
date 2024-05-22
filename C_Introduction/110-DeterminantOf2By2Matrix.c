#include <stdio.h>

int main() {
    int matrix[2][2], determinant;

    printf("Enter the elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n");
    }

    determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    printf("The determinant of the matrix is: %d\n", determinant);

    return 0;
}

