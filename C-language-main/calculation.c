#include <stdio.h>

int main()
{
	int a, b, c, e, choice;

    printf("Enter First Number:");
	scanf("%d", &a);
	printf("Enter Second Number:");
	scanf("%d", &b); 
	printf("Enter Third Number:");
	scanf("%d", &c);
	printf("Enter Forth Number:");
	scanf("%d", &e);


	printf("press 1. for Addition\n");
	printf("press 2. for Subration\n");
	printf("press 3. for Multiplation\n");
	printf("press 4. for Division\n");
	printf("Enter Number for Your Calculation: ");
	scanf("%d", &choice);
		
	switch (choice)
	{
		case 1: printf("The addition of your numbers is: %d", a+b+c+e);
	    break;
		case 2: printf("The Subration of your numbers is: %d", a-b-c-e);
		break;
		case 3: printf("The Multiplation of your numbers is: %d", a*b*c*e);
		break;
		case 4: printf("The Division of your numbers is: %d", a/b/c/e);
		break;
		default: printf("Enter Number as Displayed!!!");
		break;
	}
}


/*

Your Input: Enter First Number: 2
Your Input: Enter Second Number:3
Your Input: Enter Third Number:4
Your Input: Enter Forth Number:5

Your Input: Enter Number for Your Calculation as Displayed:1

output: The addition of your numbers is:14

*/