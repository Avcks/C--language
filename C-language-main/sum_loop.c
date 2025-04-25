#include<stdio.h>

int main()
{
	int i,n,s=0;
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++)
	{
        s=s+i;
	}
	printf("The Sum of All Number: %d",s);
}


//Enter Any Number:5
//The Sum of All Number: 15