#include<stdio.h>

int main()
{
	int s;

    printf("Enter array size: ");
    scanf("%d",&s);

	int a[s];
   
    printf("Enter array elements: \n");
    
    int i;
	for(i=0; i<s; i++)
	{
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
    }
    
    printf("Negative element From Array: ");
    
    for(i=0;i<=s;i++)
	{
		if(a[i]<0){
       
        printf("%d,",a[i]);
        }
	}
}


/* 

Enter array size: 5
Enter array elements:
a[0]= 2
a[1]= -4
a[2]= 1
a[3]= -3
a[4]= -5
Negative element From Array: -4,-3,-5

*/