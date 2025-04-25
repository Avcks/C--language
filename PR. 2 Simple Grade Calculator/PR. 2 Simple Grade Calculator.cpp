#include<stdio.h>

int main()
{
	int m, Grade;
	
	printf("Enter Your score: ");
	scanf(" %d",&m);


	(m>=90)
	?
	printf("Your Grade is A.")
    :
	(m<=90&&m>=80) ? printf("Your Grade is B.")
	               :
	               (m<=80&&m>=70) ? printf("Your Grade is C.")
	                              :(m<=70&&m>=60) ? printf("Your Grade is D.")
	                                              : (m<=60&&m>=35) ? printf("Your Grade is E.")
	                                                               : printf("Your Grade is F.");


if (m>=90){
	Grade = 1;
}else if (m<=90&&m>=80){
	Grade = 2;
}else if (m<=80&&m>=70){
	Grade = 3;
}else if (m<=70&&m>=60){
	Grade = 4;
}else if (m<=60&&m>=35){
	Grade = 5;
}

switch (Grade)
    {
   	case 1:
   	  	printf(" Excellent Work!");
   	  	break;
   	case 2:
   		printf(" Well Done.");
   	  	break;
   	case 3:
   		printf(" Good Job.");
   	  	break;
   	case 4:
   		printf(" You Passed, But You can do Better.");
   	  	break;
   	case 5:
   		printf(" You Just Passed.");
   	  	break;
   	default:
   		printf(" Sorry, You are Failed.");
	    break;
    }
    

if(m>=35)
{
	printf(" You are Eligible for The next Level.");
}else{
	printf(" You are Not Eligible for The next Level.");
}

}



