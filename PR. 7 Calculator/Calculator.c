#include<stdio.h>
int add(int a, int b) 
{
    return a + b;
}
int s(int a, int b) 
{
    return a - b;
}
int m(int a, int b) 
{
    return a * b;
}
float d(int a, int b) 
{
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Division by zero is not possible\n");
        return 0;
    }
}
int mo(int a, int b) 
{
    return a % b;
}
int main() {
    int choice, x, y;
    for (;;)
    {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n"); 
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 0) 
        {
            break;
        } else if(choice>5){
        	printf("choice is invalid, try again with given choice.");
        	break;
		}
        printf("Enter the first number: ");
        scanf("%d", &x);
        printf("Enter the second number: ");
        scanf("%d", &y);
        switch (choice) 
        {
            case 1:
                printf("Addition of %d and %d is %d\n", x, y, add(x, y));
                printf("\n");
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", x, y, s(x, y));
                printf("\n");
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", x, y, m(x, y));
                printf("\n");
                break;
            case 4:
                printf("Division of %d and %d is %.2f\n", x, y, d(x, y));
                printf("\n");
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", x, y, mo(x, y));
                printf("\n");
                break;
            default:
                break;
        }
    }
}





/*

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 5
Enter the first number: 2
Enter the second number: 2
Modulus of 2 and 2 is 0

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0

*/
