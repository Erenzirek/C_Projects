#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    // Function pointers declaration and function assignments
    int (*operations[3])(int, int) = {add, subtract, multiply};

    int choice;
    int a, b;

    while (1) {
        // Displaying operation options to the user
        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Program terminated.\n");
            break;
        }

        if (choice < 1 || choice > 3) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        // Getting inputs from the user
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        // Calling the appropriate function based on the user's choice
        int result = operations[choice - 1](a, b);
        printf("Result: %d\n", result);
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}