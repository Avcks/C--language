#include <stdio.h>

int main() 
{
    int r=5,i,j;
    for (i=r; i>0; i--) 
	{
        for (j=0; j<i; j++) 
		{
            if (j%2==0) 
			{
                printf("1");
            } else
			{
                printf("0");
            }
        }
        printf("\n");
    }
}