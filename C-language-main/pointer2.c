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
    
    int *p;
	p=&a;
	
    printf("Square of each element: \n");
    for(int i=0; i<s; i++){
    	printf("%d ",*(p+i)**(p+i));
	}
}