//3. Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;

In main print,
"Vowel" if return value is 1
"Not Vowel" if return value is 1

#include <stdio.h>

int isVowel(char ch) {
    int result;
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1; // Vowel
            break;
        default:
            result = 0; // Not a vowel
            break;
    }
    
    return result;
}

int main() {
    char ch;
    int isVowelResult;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    isVowelResult = isVowel(ch);
    
    if (isVowelResult) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}