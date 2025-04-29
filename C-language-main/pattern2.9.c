#include<stdio.h>
int main()
{
	
	int i, j,k;
	int a, b,c;
	
	for ( i=5; i>=1; i--) 
	{
        for ( j=1; j<=i ; j++)
		{
        	printf("%d ",j);
		}    
     printf("\n");
    }
    
    for ( a=2; a<=5; a++) 
	{
        for ( b=1; b<=a ; b++)
		{
        	printf("%d ",b);
		}    
     printf("\n");
    }
    
}