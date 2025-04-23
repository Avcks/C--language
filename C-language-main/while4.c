#include<stdio.h>

int main()
{
	int i;
	
	printf("Enter any number: ");
	scanf("%d", &i);
	
	while(i>=1){
		printf("%d ", i);
		i-=2;
	}
}

//input: Enter any number: 15
//output: 15 13 11 9 7 5 3 1