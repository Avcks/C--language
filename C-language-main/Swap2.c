#include<stdio.h>

int main()
{
	int a, b, c;
	
	 printf("Enter Value of a: ");
	 scanf("%d",&a);
	 
	 printf("Enter Value of b: ");
	 scanf("%d",&b);
	 
	 c=b;
	 b=a;
	 a=c;
	 
	 printf("value of a after swap is: %d ",a);
	 printf("\nvalue of b after swap is: %d ",b);

}
/*
input: Enter Value of a: 5
input: Enter Value of b: 10
output:value of a after swap is: 10 
output:value of b after swap is: 5
*/