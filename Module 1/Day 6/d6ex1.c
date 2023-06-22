#include <stdio.h>

// Structure to represent a box
typedef struct {
    double length;
    double width;
    double height;
} Box;

// Function to calculate the volume of a box using a structure pointer
double calculateVolume(const Box* box) {
    return box->length * box->width * box->height;
}

// Function to calculate the total surface area of a box using a structure pointer
double calculateSurfaceArea(const Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    // Create a box and initialize its members
    Box box;

    // Prompt the user to enter the dimensions of the box
    printf("Enter the length of the box: ");
    scanf("%lf", &box.length);

    printf("Enter the width of the box: ");
    scanf("%lf", &box.width);

    printf("Enter the height of the box: ");
    scanf("%lf", &box.height);

    // Create a structure pointer to the box
    Box* boxPtr = &box;

    // Calculate the volume using (*) and (.) operators
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;

    // Calculate the total surface area using the -> operator
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);

    // Display the volume and surface area
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}