#include<stdio.h>

void div()
{
	int x;
	printf("Enter any number: ");
	scanf("%d", &x);
	
	if(x%3==0 && x%5==0){
  	    printf("The Given Number is divided by Both 3 & 5");
    }else{
  	    printf("The Given Number is not divided by Both 3 & 5");
  }
}


int main()
{
  div();
}