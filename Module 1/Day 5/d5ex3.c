//3. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators

#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int temp = num;
    int divisor = 1;

    while (divisor <= num) {
        int remainder = temp % divisor;
        int reducedNum = (temp / (divisor * 10)) * divisor + remainder;

        if (reducedNum > largest) {
            largest = reducedNum;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest Number: %d\n", largestNumber);

    return 0;
}