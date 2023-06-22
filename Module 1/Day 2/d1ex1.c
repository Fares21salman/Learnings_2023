//1. Write a function to return the greatest of 3 number using if else if.

#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    int greatest = num1; // Assume the first number is the greatest
    
    if (num2 > greatest) {
        greatest = num2;
    }
    
    if (num3 > greatest) {
        greatest = num3;
    }
    
    return greatest;
}

int main() {
    int num1, num2, num3, greatest;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    greatest = findGreatest(num1, num2, num3);
    
    printf("The greatest number is: %d\n", greatest);
    
    return 0;
}