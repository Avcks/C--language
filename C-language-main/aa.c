#include<stdio.h>

int main()
{
	int s;


    printf("Enter tolal no. of subjects: ");
    scanf("%d",&s);
for( ; ; ){
	int a[s], asum=0, tm, apercent;
    printf("Enter Marks Out of 100: \n");
    
	for(int i=0; i<s; i++)
	{
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
	asum+=a[i];
	tm=s*100;
	apercent=asum*100/tm;
    }
    printf("Total Marks Scored by Student A is %d\n", asum);
    printf("Total Percentage Scored by Student A is %d\n", apercent);
    
    if(apercent>=90){
	printf("Grade of Student A is A");
	}else if(apercent<90 && apercent>=75){
	printf("Grade of Student A is B");
	}else if(apercent<75 && apercent>=55){
	printf("Grade of Student A is C");
	}else if(apercent<55 && apercent>=35){
	printf("Grade of Student A is D");
	}else{
	printf("Grade of Student A is F");
	}
	printf("\n");
}
	
}