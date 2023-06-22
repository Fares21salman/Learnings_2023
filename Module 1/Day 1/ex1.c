//1.If-else
#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int max = findMax(num1, num2);
    printf("The maximum number is: %d\n", max);
    return 0;
}

//1.Ternary Operator
#include <stdio.h>

int findMax(int a, int b) {
    int max = (a > b) ? a : b;
    return max;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int max = findMax(num1, num2);
    printf("The maximum number is: %d\n", max);
    return 0;
}

