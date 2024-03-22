#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 2; i <= 50; i += 2) {
        sum = sum + i * i;
    }
    
    printf("Summation of squares of even numbers from 1 to 50: %d\n", sum);
    
    return 0;
}
