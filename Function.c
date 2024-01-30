#include <stdio.h>

// Function with arguments and return type
int add(int a, int b) {
    return a + b;
}

// Function without arguments and return type
void greet() {
    printf("Hello, World!\n");
}

// Function with arguments and no return type
void displaySum(int x, int y) {
    printf("Sum: %d\n", x + y);
}

int main() {
    int result;

    // Calling function with arguments and return type
    result = add(3, 5);
    printf("Result of addition: %d\n", result);

    // Calling function without arguments and return type
    greet();

    // Calling function with arguments and no return type
    displaySum(10, 20);

    return 0;
}
