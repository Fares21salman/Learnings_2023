1. Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators

#include <stdio.h>

void printExponent(double num) {
    unsigned long long* ptr = (unsigned long long*)&num; // Use a pointer to access the bits of the double value

    // Extract the exponent bits from the double value
    unsigned long long exponentBits = (*ptr >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponentBits);

    // Print the exponent in binary format
    printf("Exponent (Binary): ");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponentBits >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x;
    printf("Enter a double value: ");
    scanf("%lf", &x);

    printExponent(x);

    return 0;
}
