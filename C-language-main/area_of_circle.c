#include<stdio.h>
#define PI 3.14
int main()
{
	int r;
	float area;
	
	 printf("Enter Radius of the circle: ");
	 scanf("%d",&r);
	 
	 area = PI*r*r;
	 
	 printf("Area of Circle is: %f", area);
}


// input = Enter Radius of the circle: 5
//output = Area of Circle is: 78.500000