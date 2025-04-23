#include<stdio.h>

int main()
{
	int p, n;
	float r, intrest;
	
	printf("Enter Principal Amount:");
	 scanf("%d",&p);
	 
	printf("\nEnter Rate of Intrest:");
	 scanf("%f",&r);
	 
	printf("\nEnter Number of Mounth:");
	 scanf("%d",&n);
	 
	intrest = p*r*n/100;
	
	printf("\nSimple Intrest of Your Principal amount Rs.%d is %f", p, intrest);
}


// input = Enter Principal Amount:10000
// input = Enter Rate of Intrest:5
// input = Enter Number of Mounth:5
// output = Simple Intrest of Your Principal amount Rs.10000 is 2500.000000