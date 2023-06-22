//5

#include <stdio.h>

// Structure to represent a point
typedef struct {
    int x;
    int y;
} Point;

// Function to swap the fields of two structures using pointers
void swapFields(Point* p1, Point* p2) {
    // Swap the x values
    int temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap the y values
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    // Create two points
    Point p1 = { 10, 20 };
    Point p2 = { 30, 40 };

    // Display the original points
    printf("Original Points:\n");
    printf("Point 1: x = %d, y = %d\n", p1.x, p1.y);
    printf("Point 2: x = %d, y = %d\n", p2.x, p2.y);

    // Swap the fields of the two points
    swapFields(&p1, &p2);

    // Display the swapped points
    printf("\nSwapped Points:\n");
    printf("Point 1: x = %d, y = %d\n", p1.x, p1.y);
    printf("Point 2: x = %d, y = %d\n", p2.x, p2.y);

    return 0;
}
