#include<stdio.h>

int main()
{
	int x, y, EQ, EQ2;
	
	 printf("Enter Value of X: ");
	 scanf("%d",&x);
     printf("Enter Value of Y: ");
	 scanf("%d",&y);
	 
	 EQ = x + y;
	 
	 EQ2 = EQ * EQ;
	 
	 printf("Ans. is: %d", EQ2);
}

/*
input: Enter Value of X: 5
input: Enter Value of Y: 5
output: Ans. is: 100
*/