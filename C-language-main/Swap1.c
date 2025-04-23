#include<stdio.h>

int main()
{
	int a, b;
	
	 printf("Enter Value of a: ");
	 scanf("%d",&a);
	 
	 printf("Enter Value of b: ");
	 scanf("%d",&b);
	 
	 a=a+b;
	 b=a-b;
	 a=a-b;

	printf("value of a after swap is: %d ",a);
	printf("\nvalue of b after swap is: %d ",b);

}

/*
input: Enter Value of X: 5
input: Enter Value of y: 10
output:value of a after swap is: 10
output:value of b after swap is: 5
*/