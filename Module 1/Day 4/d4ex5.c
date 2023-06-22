//5. Write a program to encode any given string such that it gets converted into an unrecognizable form. 
Also write a decode function to get back the original string.

#include <stdio.h>

// Function to encode the given string
void encode(char *str) {
    while (*str != '\0') {
        *str = *str + 1;  // Shift each character by 1 position
        str++;
    }
}

// Function to decode the encoded string
void decode(char *str) {
    while (*str != '\0') {
        *str = *str - 1;  // Shift each character back by 1 position
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Encode the string
    encode(str);
    printf("Encoded string: %s", str);

    // Decode the encoded string
    decode(str);
    printf("Decoded string: %s", str);

    return 0;
}