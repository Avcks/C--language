#include<stdio.h>

int main()
{
	int salary, gross_salary;
	int HRA, DA, TA;
	int hra, da, ta;
	printf("Enter Your Salary in Rs. :");
	 scanf("%d",&salary);
	
	printf("Enter Your HRA in Percentage : ");
	 scanf("%d",&HRA);
	printf("Enter Your DA in Percentage : ");
	 scanf("%d",&DA);
	printf("Enter Your TA in Percentage : ");
	 scanf("%d",&TA);
	
	hra = (salary * HRA)/100;
	da = (salary * DA)/100;
	ta = (salary * TA)/100;
	 
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