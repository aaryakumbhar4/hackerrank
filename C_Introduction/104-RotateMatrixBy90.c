#include <stdio.h>

void rotateMatrix(int matrix[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n / 2; j++) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[i][n - 1 - j];
      matrix[i][n - 1 - j] = temp;
    }
  }
}

void printMatrix(int matrix[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  int matrix[100][100];
  printf("Enter the matrix elements:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Original matrix:\n");
  printMatrix(matrix, n);

  rotateMatrix(matrix, n);

  printf("Rotated matrix in clockwise 90 degrees:\n");
  printMatrix(matrix, n);

  return 0;
}
