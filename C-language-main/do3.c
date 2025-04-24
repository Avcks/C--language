#include<stdio.h>

int main()
{
	int i,N;
	printf("Enter any number: ");
	scanf("%d", &N);
	i=1;
	do{
		if(i % 2 == 0){
			printf("%d ",i);
		}
		i++;
	}while(i<=N);
}

//input: Enter any number: 9
//output: 2 4 6 8