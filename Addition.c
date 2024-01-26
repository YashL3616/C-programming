#include <stdio.h>

int main() {
    // Declare variables to store the numbers
    int num1, num2;

    // Read the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Read the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Add the two numbers and store the result in a variable
    int sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Return 0 to indicate successful completion
