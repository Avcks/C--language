#include<stdio.h>
int main()
{
	
	int i, j,k;
	for ( i=1; i<=9; i++) 
	{
		for (k=9; k>i ; k--)
		{
		printf(" ");
		}
        for ( j=1; j<=i ; j++)
		{
        	printf("* ");
		}    
     printf("\n");
    }
}