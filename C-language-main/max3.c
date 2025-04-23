#include <stdio.h>

int main()
{
	int a=12, b=13, c=74, d=15;
	a > b 
	? 
	a > c 
	    ? 
		a > d ? printf("a is max") : printf("d is max") 
		: 
		c > d ? printf("c is Max") : printf("d is Max")
	:
	b > c 
	    ? 
		b > d ? printf("b is max") : printf("d is max") 
		:
	    c > d ? printf("c is max") : printf("d is max");
}

//output: c is max 