#include<stdio.h>

int main()
{
	int i,n,f=1;
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
        f=f*i;
	}
	printf("The Factorial is: %d",f);
}

//Enter Any Number: 5
//The Factorial is: 120