#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_array(int *arr, int size) {
  int sum = 0;
  int *ptr = arr;

  for (int i = 0; i < size; i++) {
    sum = sum + *ptr;
    ptr++;
  }

  return sum;
}

int main() {
  int size;

  printf("Enter size of the array: ");
  scanf("%d", &size);

  int *arr = (int*)malloc(size * sizeof(int));

  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  srand(time(NULL));

  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 100; 
  }

  int result = sum_array(arr, size);

  printf("The array elements are: ");
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
 
  printf("The sum of the array elements is: %d\n", result);

  free(arr);

  return 0;
}