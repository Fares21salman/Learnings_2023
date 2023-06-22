//2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting

#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);  // Allocate temporary memory for swapping

    // Copy the content of 'a' to the temporary variable
    memcpy(temp, a, size);

    // Copy the content of 'b' to 'a'
    memcpy(a, b, size);

    // Copy the content of the temporary variable to 'b'
    memcpy(b, temp, size);

    free(temp);  // Free the temporary memory
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the integers
    swap(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    double d1, d2;
    printf("Enter the first double: ");
    scanf("%lf", &d1);
    printf("Enter the second double: ");
    scanf("%lf", &d2);
    printf("Before swapping: d1 = %lf, d2 = %lf\n", d1, d2);

    // Swap the doubles
    swap(&d1, &d2, sizeof(double));
    printf("After swapping: d1 = %lf, d2 = %lf\n", d1, d2);

    char c1, c2;
    printf("Enter the first character: ");
    scanf(" %c", &c1);
    printf("Enter the second character: ");
    scanf(" %c", &c2);
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);

    // Swap the characters
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}