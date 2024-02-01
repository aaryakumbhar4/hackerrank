#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int i;
    int sum = 0;
    int a;
    scanf("%d", &n);
    while(n != 0){
        a = n%10;
        sum = sum + a;
        n = n/10;
    }
    printf("%d\n",sum);
    return 0;
}
