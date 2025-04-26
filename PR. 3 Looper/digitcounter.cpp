#include <stdio.h>

int main() 
{
    int sum=0, rem, num, count =0; 
	
	printf("Enter any number: ");
    scanf("%d", &num); 
    
    while(num>0){
	 rem=num%10;
	 num=num/10;
	 count++;
	}
	printf("Total Number Of Digits: %d ", count);
}

/*  
input: Enter any number: 123
output: Total Number Of Digits: 3
*/