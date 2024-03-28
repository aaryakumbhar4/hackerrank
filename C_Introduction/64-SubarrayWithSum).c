#include <stdio.h> 
#include <stdlib.h> 

void print_sub_arrays_with_given_sum(int* a, int N, int S); 

int main(void)
{
    int a[5] = {4, 2, -3, 1, 6}; 
    int N = 5; 
    int S = 0; 
 
    print_sub_arrays_with_given_sum(a, N, S); 

    return 0; 
}

void print_sub_arrays_with_given_sum(int* a, int N, int S)
{
    int i, j, k, Sum; 

    for(i = 0; i < N; ++i)
    {
        Sum = 0; 
        for(j = i; j < N; ++j)
        {
            Sum = Sum + a[j];
            if(Sum == S)
            {
                printf("Subarray found with sum 0 is:");
                for(k = i; k <= j; ++k)
                    printf("%d ", a[k]); 
                printf("\n");
            }
        }
    }
}
