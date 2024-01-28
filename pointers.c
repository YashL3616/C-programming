#include <stdio.h>

int main() {
    int number = 42;
    int *pointerToNumber;  // Declare a pointer to an integer

    // Assign the address of the 'number' variable to the pointer
    pointerToNumber = &number;

    // Access the value using the pointer
    printf("Value of number: %d\n", *pointerToNumber);

    // Modify the value through the pointer
    *pointerToNumber = 55;

    // Print the updated value of 'number'
    printf("Updated value of number: %d\n", number);

    return 0;
}
