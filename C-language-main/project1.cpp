#include<stdio.h>

int main()
{
	int salary, gross_salary;
	int HRA, DA, ;
	int hra, da, ta;
	printf("Enter Your Salary in Rs. :");
	 scanf("%d",&salary);  
	
	
	if(salary<=5000){
		hra = (salary * 8)/100;
		da = (salary * 20)/100;
	}else if(salary<10000&&salary>5000){
		hra = (salary * 12)/100;
		da = (salary * 30)/100;
	}else if(salary<15000&&salary>10000){
		hra = (salary * 15)/100;
		da = (salary * 40)/100;
	}else if(salary>15000){
		hra = (salary * 20)/100;
		da = (salary * 50)/100;
	}
	
//	hra = (salary * HRA)/100;
//	da = (salary * DA)/100;
//	ta = (salary * TA)/100;
	 
	gross_salary = salary + hra + da + ta;
    
    printf("Your Gross Salary is Rs.%d", gross_salary);
}



/*
input: Enter Your Salary in Rs. :100
input: Enter Your HRA in Percentage : 10
input: Enter Your DA in Percentage : 5
input: Enter Your TA in Percentage : 8
output: Your Gross Salary is Rs. 123
*/