#include <stdio.h>
#include <stdlib.h>

void copy(int *main, int *copyarr, int size) {
  
  for (int i = 0; i < size; i++) {
    
    *copyarr = *main;

    main++;
    copyarr++;
  }
}

int main() {
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int *main_arr = (int*)malloc(size * sizeof(int));
  int *copy_arr = (int*)malloc(size * sizeof(int));
  if (main_arr == NULL && copy_arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  printf("Enter elements for the main array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &main_arr[i]);
  }

  copy(main_arr, copy_arr, size);

  printf("Copied array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d\n", copy_arr[i]);
  }
 
  free(main_arr);
  free(copy_arr);

  return 0;
}

