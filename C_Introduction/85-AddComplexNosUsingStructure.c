#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

int main() {
    struct Complex num1, num2, sum;

    printf("Enter real part of 1st complex number: ");
    scanf("%f", &num1.real);
    printf("Enter imaginary part of 1st complex number: ");
    scanf("%f", &num1.imag);

    printf("Enter real part of 2nd complex number: ");
    scanf("%f", &num2.real);
    printf("Enter imaginary part of 2nd complex number: ");
    scanf("%f", &num2.imag);

    sum = add(num1, num2);

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}