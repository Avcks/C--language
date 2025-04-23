#include<stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter your First Angle: ");
	scanf("%d",&a);
	printf("Enter your Second Angle: ");
	scanf("%d",&b);
	
	c = 180 - (a + b);
	
	printf("Your Third Angle is: %d",c);
}

/*
input: Enter your First Angle: 65
input: Enter your Second Angle: 45
output: Your Third Angle is: 70
*/