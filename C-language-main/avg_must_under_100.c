#include <stdio.h>
int main(){

int m, e, s;
float  avg;

printf("Enter Maths Marks: ");
 scanf("%d",&m);
printf("Enter English Marks: ");
 scanf("%d",&e);
printf("Enter Science Marks: ");
 scanf("%d",&s);

   if(m > 100){
	printf("Your Entered Marks in Maths subject is Grater then 100.");
	printf("So,Enter Marks Under 100 and Try Again");
   }else if(e > 100){
	printf("Your Entered Marks in English subject is Grater then 100.");
	printf("So,Enter Marks Under 100 and Try Again");
   }else if (s > 100){
	printf("Your Entered Marks in Science subject is Grater then 100.");
	printf("So,Enter Marks Under 100 and try again");
   }else{
	avg = (m+e+s)*100/300;
    printf("Average Marks: %f", avg);
   }

}



/*
input: Enter Maths Marks: 90
input: Enter English Marks: 82
input: Enter Science Marks: 78
output: Average Marks: 83.000000
*/