#include<stdio.h>

int cal()
{
	int choice, a, b, i;
	
	printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %%\n");
    printf("press 0 for for exit\n");

	printf("Pless enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the first Number: ");
    scanf("%d",&a);
    printf("Enter the second Number: ");
    scanf("%d",&b);
    
	if(choice!=0){
		
		switch (choice)
	{
		case 1: printf("The Addition of your numbers %d & %d is: %d\n",a , b, a+b);
	    break;
		case 2: printf("The Subration of your numbers %d & %d is: %d\n",a , b, a-b);
		break;
		case 3: printf("The Multiplation of your numbers %d & %d is: %d\n",a , b, a*b);
		break;
		case 4: printf("The Division of your numbers %d & %d is: %d\n",a , b, a/b);
		break;
		case 5: printf("The Modulas of your numbers %d & %d is: %d\n", a, b, a%b);
		break;
		case 6: 
		break;
		default:
		break;
    }
        return i==1;
	}else{
		return i==5;
	}
	
}

int main()
{
	for(int i=1;i>=0;i--){
    cal();
	}
}
