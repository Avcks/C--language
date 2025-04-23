#include<stdio.h>
#define PI 3.14
int main()
{

	int r;
	float perimeter;
	
	 printf("Enter Radius of the circle: ");
	 scanf("%d",&r);
	 
	 perimeter = 2*PI*r;
	 
	 printf("Perimeter of Circle is: %f", perimeter);
}

// input = Enter Radius of the circle: 5
// output = Perimeter of Circle is: 31.400000
