#include<stdio.h>

int main()
{
	int s,e;
	
	printf("Enter first number: ");
	scanf("%d", &s);
	
	printf("Enter second number: ");
	scanf("%d", &e);
	
	while(s<=e){
		printf("%d ", s);
		s+=4;
	
	}
}

//input: Enter first number: 2020
//input: Enter Second number: 2040
//output: 2020 2024 2028 2032 2036 2040