#include<stdio.h>

int main()
{
	int s;
	int i;
	float d,j;

printf("Enter array size: ");
scanf("%d",&s);

	int a[s];
   
    printf("Enter array elements: \n");
    
    
	for(i=0; i<s; i++)
	{
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
	j+=a[i];
    }
    d=j/s;
printf("Average of an Array: %f\n",d);
}