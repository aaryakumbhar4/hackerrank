#include <stdio.h>
#include <stdlib.h>

void increase_array(int* arr, int size, int value) {
  for (int i = 0; i < size; i++) {
    arr[i] = arr[i] + value;
  }
}

int main() {
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int* arr = (int*)malloc(size * sizeof(int));

  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Original array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }

  increase_array(arr, size, 5);

  printf("Modified array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
 
  free(arr);

  return 0;
}
