#include <stdio.h>

int main() 
{
    int n = 5,i,j,c = 1;

    for (i=1;i<=n;i++) 
	{
        for (j=1;j<=i;j++) 
		{ 
            printf("%d ", c);
            c++;
        }
        printf("\n"); 
    }
}