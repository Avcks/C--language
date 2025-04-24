#include <stdio.h>
int main(){

int n;

printf("Enter any Number:");
scanf("%d",&n);

 if(n < 0){
	  printf("The is number is Negative");
 }else if (n > 0){
	  printf("This number is Positive");
 }else{
	  printf("This number is Neutral");
 }

}
/*
input: Enter any Number:0
output: This number is Neutral

input: Enter any Number:-9
output: The is number is Negative

input: Enter any Number:7
output: This number is Positive
*/