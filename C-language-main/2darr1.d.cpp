#include<stdio.h>

int main()
{
	int rs, cs;
	int i,j, t;
	float d;

    printf("Enter array's row size: ");
    scanf("%d",&rs);
    printf("Enter array's column size: ");
    scanf("%d",&cs);

	int a[rs][cs];
    printf("\n");
    printf("Enter array elements: \n");
    
    
	for(i=0; i<rs; i++)
	{ 
	   for(j=0; j<cs; j++){
	   printf("a[%d][%d]= ",i,j);
	   scanf("%d",&a[i][j]);
	   t+=a[i][j];
       }
    }
    printf("\n");
    d = (float)t/(rs*cs);
    printf("Average of an Array: %.2f",d);
}
