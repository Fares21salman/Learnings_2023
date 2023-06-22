//4

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a student
typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array of students
    Student* students = (Student*)malloc(n * sizeof(Student));

    // Read data for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &(students[i].age));
        printf("Grade: ");
        scanf("%f", &(students[i].grade));
    }

    // Display data for each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}