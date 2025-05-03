#include<stdio.h>

int main()
{
	int rs, cs;

    printf("Enter array's row size: ");
    scanf("%d",&rs);
    printf("Enter array's column size: ");
    scanf("%d",&cs);

	int a[rs][cs];
   
    printf("Enter array elements: \n");
    
    
	for(int i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("a[%d][%d]= ",i,j);
	   scanf("%d",&a[i][j]);
       }
    }
    
    printf("\n");
    
    int b[rs][cs];
   
    printf("Enter array elements: \n");
    
    
	for(int i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("b[%d][%d]= ",i,j);
	   scanf("%d",&b[i][j]);
       }
    }


    int c[rs][cs];
    for(int i=0; i<rs; i++)
	{
	   for(int j=0; j<cs; j++){
	   c[i][j]= a[i][j] + b[i][j];
       }
    }
    printf("\n");
    printf(" C\n");
    for(int i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("%d  ",c[i][j]);
       }
       printf("\n");
    }
    
    printf(" A\n");
    
    for(int i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("%d  ",a[i][j]);
       }
       printf("\n");
    }

    printf(" B\n");
    for(int i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("%d  ",b[i][j]);
       }
       printf("\n");
    }
}