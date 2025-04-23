#include<stdio.h>

int main()
{
	float F, C;
	
	printf("Enter celsius:");
	scanf("%f",&C);
	
	F = (C * 1.8)+32;
	
	printf("Fahrenheit is: %f",F);
}

/*
input: Enter celsius:38
output: Fahrenheit is: 100.4000020
*/