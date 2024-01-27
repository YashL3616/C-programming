#include <stdio.h>

int main() {
    int choice;

    // Prompt user for input
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    // Switch statement
    switch (choice) {
        case 1:
            printf("You selected option 1.\n");
            break;
        case 2:
            printf("You selected option 2.\n");
            break;
        case 3:
            printf("You selected option 3.\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
