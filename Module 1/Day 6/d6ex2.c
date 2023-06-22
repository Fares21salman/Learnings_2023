//2
#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    double real;
    double imaginary;
} Complex;

// Function to read a complex number from the user
void readComplexNumber(Complex* num) {
    printf("Enter the real part: ");
    scanf("%lf", &(num->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(num->imaginary));
}

// Function to write a complex number to the console
void writeComplexNumber(const Complex* num) {
    if (num->imaginary >= 0) {
        printf("%.2f + %.2fi\n", num->real, num->imaginary);
    } else {
        printf("%.2f - %.2fi\n", num->real, -num->imaginary);
    }
}

// Function to add two complex numbers
Complex addComplexNumbers(const Complex* num1, const Complex* num2) {
    Complex sum;
    sum.real = num1->real + num2->real;
    sum.imaginary = num1->imaginary + num2->imaginary;
    return sum;
}

// Function to multiply two complex numbers
Complex multiplyComplexNumbers(const Complex* num1, const Complex* num2) {
    Complex product;
    product.real = num1->real * num2->real - num1->imaginary * num2->imaginary;
    product.imaginary = num1->real * num2->imaginary + num1->imaginary * num2->real;
    return product;
}

int main() {
    Complex num1, num2;

    printf("Enter the first complex number:\n");
    readComplexNumber(&num1);

    printf("Enter the second complex number:\n");
    readComplexNumber(&num2);

    printf("The first complex number is: ");
    writeComplexNumber(&num1);

    printf("The second complex number is: ");
    writeComplexNumber(&num2);

    Complex sum = addComplexNumbers(&num1, &num2);
    printf("Sum of the complex numbers: ");
    writeComplexNumber(&sum);

    Complex product = multiplyComplexNumbers(&num1, &num2);
    printf("Product of the complex numbers: ");
    writeComplexNumber(&product);

    return 0;
}