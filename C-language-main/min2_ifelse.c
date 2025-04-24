#include <stdio.h>
int main(){
int a, b;

printf("Enter a value of First Number:");
scanf("%d",&a);
printf("Enter a value of Second Number:");
scanf("%d",&b);

 if (a<b){
 	printf("The Minimum value is: %d", a);
 }else 
    printf("The Minimum value is: %d", b);

 }

/*
input: Enter a value of First Number:8
input: Enter a value of Second Number:3
output: The Minimum value is:3
*/