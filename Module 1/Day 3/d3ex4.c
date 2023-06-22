//4. Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

Topics to be covered
- Arrays
- Loops
- Bitwise Operators

#include <stdio.h>

// Function to count the number of set bits in a given number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1; // Check the least significant bit
        num >>= 1; // Right shift the number
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits in the array: %d\n", totalSetBits);

    return 0;
}