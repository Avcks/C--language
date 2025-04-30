#include <stdio.h>

int main() 
{
	int i, j;
	for (i=1; i<=5;i++)
	{
		if(i==1 || i==3)
		{
			printf("* * * * *");
		}else if(i==2){
			printf("*       *");
		}else{
			printf("*");
		}
		printf("\n");
	}
}


/*
* * * * *
*       *
* * * * *
*
*
*/