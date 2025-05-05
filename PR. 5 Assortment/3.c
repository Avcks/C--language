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
       }
    }
    
    printf("\n");
    
    printf("Before the transpose matrix of an array: \n");
    
    for(i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    
    printf("\n");
    
    printf("The transpose matrix of an array: \n");
    
    for(i=0; i<rs; i++)
	{ 
	   for(int j=0; j<cs; j++){
	   printf("%d ",a[j][i]);
       }
       printf("\n");
    }
    
}




/*

Enter array's row size: 3
Enter array's column size: 3

Enter array elements:
a[0][0]= 2
a[0][1]= 4
a[0][2]= 1
a[1][0]= 3
a[1][1]= 5
a[1][2]= 4
a[2][0]= 8
a[2][1]= 2
a[2][2]= 6

Before the transpose matrix of an array:
2 4 1
3 5 4
8 2 6

The transpose matrix of an array:
2 3 8
4 5 2
1 4 6

*/
