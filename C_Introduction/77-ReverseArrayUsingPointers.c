#include <stdio.h>
#include <stdlib.h>

void reverse_array(int* arr, int size) {
  int *ptr1 = arr; 
  int *ptr2 = arr + size - 1; 

  while (ptr1 < ptr2) {
   
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    ptr1++; 
    ptr2--; 
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

  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  reverse_array(arr, size);

  printf("\nReversed array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  free(arr);

  return 0;
}
