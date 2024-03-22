#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 2; i <= 50; i = i + 2) {
        int square = i * i;
        int cube = i * i * i;
        int quad = i * i * i * i;
        
        sum = sum + square + cube + quad;
    }

    printf("Summation of i^2 + i^3 + i^4 for even values of i up 50 is: %d\n",  sum);
    
    return 0;
}