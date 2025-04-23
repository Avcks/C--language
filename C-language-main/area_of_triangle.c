#include<stdio.h>

int main()
{
	int b, h; 
	float area;

	printf("Enter breath of Triangle: ");
	 scanf("%d",&b);
	printf("Enter Hight of Triangle: ");
	 scanf("%d",&h);
	 
	area = 0.5*b*h;
	
	printf("Area of Triangle is:%f", area);
}

// input = Enter breath of Triangle: 5
// input = Enter Hight of Triangle: 5
//output = Area of Triangle is:12.500000