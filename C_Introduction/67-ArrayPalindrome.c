#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPalindrome(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    
    while (i < j) {
        if (arr[i] != arr[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}


int main() {
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, size)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    free(arr);

    return 0;
}