#include <stdio.h> 
int reverseDigits(int num) 
{ 
    int revno = 0; 
    while (num != 0) { 
        revno = revno * 10 + num % 10; 
        num = num / 10; 
    } 
    return revno; 
}  
int main() 
{ 
    int num; 
    
    printf("Enter number:");
    scanf("%d", &num);

    int result = reverseDigits(num);

    printf("Reverse is %d\n", result);

    return 0; 
}