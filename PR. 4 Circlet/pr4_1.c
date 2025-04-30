#include<stdio.h>

int main()
{
	int i, n;
	
	for (i=41;i<=45;i++)
	{
		for (n=41;n<=i;n++)
		{
			printf("%d ",n);
		}
		printf("\n");
	}
}

/*
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
 */