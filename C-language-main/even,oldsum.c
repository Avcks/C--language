#include<stdio.h>
int main()
{
	int n;
	printf("Enter Array Size: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(int i=0; i<n; i++)
	{
	printf("Enter a[%d]; ",i);
	scanf("%d", &a[i]);
	}
	
	int esum=0, osum=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2 == 0)
		{
			esum+=a[i];
		}else{
			osum+=a[i];
		}
	}
	
	printf("Total Even Element Sum is: %d\n", esum);
	printf("Total Old Element Sum is: %d", osum);
	
}