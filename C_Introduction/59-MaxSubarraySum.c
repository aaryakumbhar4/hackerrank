#include <stdio.h>
#include <stdlib.h>

void print_sub_arrays(int* a, int N);

void print_sub_array_with_maximum_sum(int* a, int N);

int main(void)
{
    int a[4] = {-1,3,4,-2};
    int N = 4;

    print_sub_arrays(a, N);

    print_sub_array_with_maximum_sum(a, N);

    return 0;
}

void print_sub_arrays(int* a, int N)
{
    int i, j, k;

    for (i = 0; i < N; ++i)
    {
        for (j = i; j < N; ++j)
        {
            printf("SHOWING SUBARRAY[%d:%d]:\n", i, j);
            for (k = i; k <= j; ++k)
                printf("\ta[%d]:%d\n", k, a[k]);
        }
    }
}

void print_sub_array_with_maximum_sum(int* a, int N)
{
    int maxSum = 0; 
    int currentSum = 0; 
    int i = 0;
    int j = 0; 
    int tempStart = 0; 

    for (int k = 0; k < N; ++k)
    {
        if (a[k] > currentSum + a[k])
        {
            currentSum = a[k]; 
            tempStart = k;
        }
        else
        {
            currentSum += a[k];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            i = tempStart;
            j = k;
        }
    }
    printf("Subarray with maximum sum: ");
    for (int k = i; k <= j; ++k)
    {
        printf("%d ", a[k]);
    }
    printf("\nMaximum Sum: %d\n", maxSum);
}

