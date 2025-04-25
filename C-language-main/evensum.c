#include<stdio.h>

int main()
{
	int i,n,s=1;
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++)
	{	
	if (i%2==0){
	printf(" %d",i);
	s=s+i;
	}

	}
	printf("\nThe Sum of All Number: %d",s);
}

/*
Enter Any Number: 9
 0 2 4 6 8
The Sum of All Number: 21
*/