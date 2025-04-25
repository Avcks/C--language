#include<stdio.h>

int main()
{
	int m, Grade;
	
	printf("Enter Your score:");
	scanf(" %d",&m);
	
	

	//(con)? true:false;

	(m>=90)
	?
//	Grade = A
	printf("Your Grade is A.")
	: 
	(m<=90&&m>=80)
	  ?
//	  Grade = B;
	  printf("Your Grade is B.")
	  :
	  (m<=80&&m>=70)
	    ?
//	    Grade = C;
	    printf("Your Grade is C.")
	    :
	    (m<=70&&m>=60)
	      ?
//	      Grade = D;
	      printf("Your Grade is D.")
	      :
	      (m<=60&&m>=35)
	           ?
//	           Grade = E;
	           printf("Your Grade is E.")
	           :
//	           	Grade = F;
	            printf("Your Grade is F.");
	           
	
/*switch (exp)
  {
  case value1;
  
    break;
  case value2;
   
    break;
    
   default:
*/


switch (Grade)
    {
   	case A:
   	  	printf("Excellent Work!");
   	  	break;
   	case B:
   		printf("Well Done");
   	  	break;
   	case C:
   		printf("Good Job");
   	  	break;
   	case D:
   		printf("You Passed, But You can do Better");
   	  	break;
   	case E:
   		printf("You Just Passed");
   	  	break;
   	default:
   		printf("Sorry, You are Failed.");
	    break;
    }


if(m>35)
{
	printf(" You are Eligible for The next Level");
}else{
	printf(" You are Not Eligible for The next Level");
}

}



