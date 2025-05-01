#include<stdio.h>

int main()
{
	int s;

printf("Enter array size: ");
scanf("%d",&s);

	int a[s];
   
    printf("Enter array elements: \n");
    
    
	for(int i=0; i<s; i++)
	{
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
    }
    
    printf("\n");
    
    int b[s];
   
    printf("Enter array elements: \n");
    
    
	for(int i=0; i<s; i++)
	{
	printf("b[%d]= ",i);
	scanf("%d",&b[i]);
    }


    int c[s];
    for(int i=0; i<s; i++)
	{
    c[i]=a[i]+b[i];
    }
    
    printf("Array C is: ");
    
    for(int i=0; i<s; i++) {
        printf("%d ", c[i]);
	}
}
