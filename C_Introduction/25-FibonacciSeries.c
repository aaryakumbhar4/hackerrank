#include<stdio.h>
void Fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int nextterm;

    printf("Fibonacci series is:");
    for(int i = 1; i <= n; i++){
        printf("%d ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }

}
int main(){
    int n;

    printf("Enter number of terms:");
    scanf("%d", &n);

    Fibonacci(n);

    return 0;
}