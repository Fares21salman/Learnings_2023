//1. Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops

#include <stdio.h>

// Function to print numbers from 1 to n
void printIncreasing(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

// Function to print spaces
void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

// Function to print numbers from n to 1
void printDecreasing(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printIncreasing(i);
        printSpaces(2 * (n - i));
        if (i != 1) {
            printDecreasing(i);
        }
        printf("\n");
    }

    return 0;
}