//4. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5

#include <stdio.h>

void findSmallestAndLargestDigits(int n, int nums[]) {
    int smallestDigit = 9;
    int largestDigit = 0;
    int i;

    for (i = 0; i < n; i++) {
        int num = nums[i];
        while (num > 0) {
            int digit = num % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            num /= 10;
        }
    }

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int nums[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    findSmallestAndLargestDigits(n, nums);

    return 0;
}
