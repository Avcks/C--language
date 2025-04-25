#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	for(i=-n;i<=n;i++)
	{
    printf("%d ",i);;
	}

}

//Enter Any Number: 5
//-5 -4 -3 -2 -1 0 1 2 3 4 5