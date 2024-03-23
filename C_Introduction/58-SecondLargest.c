#include <stdio.h>

int main(void) {
    int arr[50];
    int n;
    int i;
    int large1 = 0;
    int large2 = 0;

    printf("Enter size of array:\n");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > large1) {
            large2 = large1;
            large1 = arr[i];
        } else if (arr[i] > large2) {
            large2 = arr[i];
        }
    }

    printf("Second largest is %d", large2);

    return 0;
}