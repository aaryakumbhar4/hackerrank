#include <stdio.h>

int Triangular(int num) {

    int sum = 0;
    int i = 1;

    while (sum < num) {
        sum = sum + i;
        if (sum == num)
            return 1; 
        i = i + 1;
    }
    return 0; 
}

int main() {

    printf("Triangular numbers from 1 to 500:\n");
    
    for (int num = 1; num <= 500; num++) {
        if (Triangular(num))
            printf("%d\n", num);
    }

    return 0;
}
