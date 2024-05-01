#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

Complex divideComplex(Complex c1, Complex c2) {
    Complex result;
    float denominator = (c2.real * c2.real) + (c2.imag * c2.imag);
    if (denominator == 0) {
        printf("Divide by zero is not possible!\n");
        return result;
    }
    result.real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / denominator;
    result.imag = ((c1.imag * c2.real) - (c1.real * c2.imag)) / denominator;
    return result;
}

void displayComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex c1, c2, result;
    char operation;

    printf("Enter two complex numbers:\n");
    printf("First number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    displayComplex(c1);
    printf("Second number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    displayComplex(c2);

    do {
        printf("Choose operation between +, -, *, /: ");
        scanf(" %c", &operation); 

        switch (operation) {
            case '+':
                result = addComplex(c1, c2);
                printf("Addition: ");
                displayComplex(result);
                break;
            case '-':
                result = subtractComplex(c1, c2);
                printf("Subtraction: ");
                displayComplex(result);
                break;
            case '*':
                result = multiplyComplex(c1, c2);
                printf("Multiplication: ");
                displayComplex(result);
                break;
            case '/':
                result = divideComplex(c1, c2);
                if (result.real != 0 || result.imag != 0) {
                    printf("Quotient: ");
                    displayComplex(result);
                }
                break;
            default:
                printf("Invalid operation....\n");
        }

        printf("Do you want to perform another operation (y/n)? ");
        scanf(" %c", &operation); 
    } while (operation == 'y');

    printf("Exiting...");

    return 0;
}
