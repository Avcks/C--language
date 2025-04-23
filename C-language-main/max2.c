#include <stdio.h>

int main()
{
	int a=12, b=13, c=14;
	a > b 
	? 
	a > c ? printf("a is max") : printf("c is max")
	:
	b > c ? printf("b is max") : printf("c is Max");
}

//output: c is Max 