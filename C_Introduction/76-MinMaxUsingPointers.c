#include <stdio.h>
#include <stdlib.h>

int find_min(int* arr, int size) {
  int min_value = *arr; 

  for (int i = 1; i < size; i++) {
    if (arr[i] < min_value) {
      min_value = arr[i];
    }
  }
  return min_value;
}

int find_max(int* arr, int size) {
  int max_value = *arr;
  for (int i = 1; i < size; i++) {
    if (arr[i] > max_value) {
      max_value = arr[i];
    }
  }
  return max_value;
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

  printf("Enter the array elements:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int min_value = find_min(arr, size);
  int max_value = find_max(arr, size);

  printf("Minimum value: %d\n", min_value);
  printf("Maximum value: %d\n", max_value);

  free(arr);

  return 0;
}