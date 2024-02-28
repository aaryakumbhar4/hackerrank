
#include<stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int palindrome(int num){
    int revno = 0; 
    int originalNum = num;
    while (num != 0) { 
        revno = revno * 10 + num % 10; 
        num = num / 10; 
    } 
    return originalNum == revno;
}

int SumOfPrimeNumbers(int start, int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            printf("%d is prime number\n", i);
            if(palindrome(i)){
                printf("%d is palindrome number\n", i);
            } else {
                printf("%d is not palindrome number\n", i);
            }
            sum = sum + i; 
        }
    }
    return sum;
}

int main(){
    int start, end;

    printf("Enter start number:");
    scanf("%d",&start);
    printf("Enter end number:");
    scanf("%d",&end);

    int result = SumOfPrimeNumbers(start, end);

    printf("Summation of prime numbers from %d to %d is %d\n", start, end, result);

    return 0;
}
