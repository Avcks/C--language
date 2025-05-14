#include <stdio.h>

// User Defined Functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int modulus(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
}

int main() {
    int choice, num1, num2;
    
    while (1) {
        // Menu
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");  // Use %% to print a single %
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                printf("Division of %d and %d is %.2f\n", num1, num2, divide(num1, num2));
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

   
}
