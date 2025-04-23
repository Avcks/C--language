#include <stdio.h>

int main()
{
	int a, b, Language;
	
	printf("press 1. for English\n");
	printf("press 2. for Hindi\n");
	printf("press 3. for Gujarati\n");
	printf("Enter Number as per Your Language: ");
	scanf("%d", &Language);
	
	switch(Language)
	{
		case 1: printf("Your call will be soon answered.");
	    break;
		case 2: printf("aapakee kol ka jald hee uttar diya jaega.");
		break;
		case 3: printf("Tamara kolano tuka samaya ma javaba apava ma avase.");
		break;
		default: printf("Enter Number as Displayed");
		break;
	}
}

/*
Your Input: Enter Number as per Your Language: 1
output: Your call will be soon answered.

Your Input: Enter Number as per Your Language: 2
output: aapakee kol ka jald hee uttar diya jaega.

Your Input: Enter Number as per Your Language: 3
output: Tamara kolano tuka samaya ma javaba apava ma avase.

Your Input: Enter Number as per Your Language: 4 or other number then 1,2,3
output: Enter Number as Displayed
*/