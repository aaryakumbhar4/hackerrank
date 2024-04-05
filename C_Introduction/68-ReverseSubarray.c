#include <stdio.h>
#include <stdlib.h>

void print_sub_arrays(int* a, int N);

int main(void)
{
    int a[5] = {4, 2, -3, 1, 6};
    int N = 5;

    print_sub_arrays(a, N);

    return 0;
}

void print_sub_arrays(int* a, int N)
{
    int i, j, k;

    for(i = 0; i < N; ++i)
    {
        printf("Subarrays starting at index %d:\n", i);
        for(j = i; j < N; ++j)
        {
            printf("Subarray:");
            for(k = i; k <= j; ++k)
                printf("%d ", a[k]);
            printf("\n");

            printf("Reverse of the subarray:");
            for(k = j; k >= i; --k)
                printf("%d ", a[k]);
            printf("\n");
        }
    }
}
