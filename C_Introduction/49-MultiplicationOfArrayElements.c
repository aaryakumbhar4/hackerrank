#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    

    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int mul = 1;
    
    for (int i = 0; i < n; i++) {
        mul = mul * arr[i];
    }
    
    printf("The multiplication of all elements in the array is: %d\n", mul);
    
    free(arr);
    
    return 0;
}
