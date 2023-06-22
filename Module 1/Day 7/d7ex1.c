#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* inputString, struct Student* students, int numStudents) {
    const char delimiter[2] = " ";
    char* token;

    token = strtok(inputString, delimiter);
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name));

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  // Consume the newline character

    struct Student* students = malloc(numStudents * sizeof(struct Student));

    printf("Enter the student data: \n");
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  // Remove the newline character

    parseInputString(inputString, students, numStudents);

    // Display the initialized student array
    printf("\nStudent Data:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
