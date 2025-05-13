#include<stdio.h>

void cube()
{
	int x;
	printf("Enter any number: ");
	scanf("%d", &x);
	
	printf("\nCube is : %d",x*x*x);
}


int main()
{
  cube();
}