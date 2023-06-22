//4. Write a function xstrchr() which scans a string from beginning to end in search of a character. 
If the character is found, it should return a pointer to the first occurrence of the given character in the string.
If the given character is not found, the function returns a NULL.
The prototype of the function should be:

char *xstrchr(char *string, char ch):

#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }
    return NULL;
}

int main() {
    char string[100];
    char ch;
    char *result;

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    result = xstrchr(string, ch);

    if (result == NULL) {
        printf("Character '%c' not found in the string.\n", ch);
    } else {
        printf("Character '%c' found at position: %ld\n", ch, result - string + 1);
    }

    return 0;
}