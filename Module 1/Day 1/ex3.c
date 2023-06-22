//3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
    
#include <stdio.h>

int main() {
    int rollNo, physicsMarks, mathMarks, chemistryMarks;
    char name[50];

    // Read inputs from the user
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Marks in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter Marks in Math: ");
    scanf("%d", &mathMarks);
    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistryMarks);

    // Calculate total marks and percentage
    int totalMarks = physicsMarks + mathMarks + chemistryMarks;
    float percentage = (float)totalMarks / 3;

    // Display the summary
    printf("\n--- Student Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemistryMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

