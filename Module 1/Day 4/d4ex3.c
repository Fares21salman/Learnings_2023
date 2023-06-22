//3. Suppose 7 names are stored in an array of pointers names[] as shown below:
 char *name[]={
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
          }
  Write a program to arrange these names in alphabetical order.
  
#include <stdio.h>
#include <string.h>

void sortNames(char *names[], int numNames) {
    int i, j;
    char *temp;

    for (i = 0; i < numNames - 1; i++) {
        for (j = 0; j < numNames - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numNames, i;

    printf("Enter the number of names: ");
    scanf("%d", &numNames);

    char *names[numNames];

    printf("Enter the names:\n");
    for (i = 0; i < numNames; i++) {
        char buffer[100];
        scanf("%s", buffer);
        names[i] = strdup(buffer);
    }

    printf("\nNames before sorting:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    sortNames(names, numNames);

    printf("\nNames after sorting:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    // Free memory allocated for names
    for (i = 0; i < numNames; i++) {
        free(names[i]);
    }

    return 0;
}
