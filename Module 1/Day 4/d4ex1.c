1. Write a program to swap every alternate element of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be a[5] = {30, 20, 10, 40, 50}
one more example a[5] = {10, 20, 30, 40, 50, 60}, the result should be a[5] = {30, 20, 10, 60, 50, 40}

Topics to be covered
- Arrays
- Loops
- Basic Operators

#include <stdio.h>

void swapAlternateElements(int *arr, int size) {
    int i, temp;
    for (i = 0; i < size - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
    }
}

int main() {
    int i;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    swapAlternateElements(arr, size);

    printf("\nSwapped array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
