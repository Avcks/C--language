#include<stdio.h>

int main()
{
	int s;

    printf("Enter tolal no. of subjects: ");
    scanf("%d",&s);
    
    
//Student A
	int a[s], asum=0, atm, apercent;
    printf("Enter Marks Out of 100: \n");
    
	for(int i=0; i<s; i++)
	{
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
	asum+=a[i];
	atm=s*100;
	apercent=asum*100/atm;
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
	
//Student B
	int b[s], bsum=0, btm, bpercent;
    printf("Enter Marks Out of 100: \n");
    
	for(int i=0; i<s; i++)
	{
	printf("b[%d]= ",i);
	scanf("%d",&b[i]);
	bsum+=b[i];
	btm=s*100;
	bpercent=bsum*100/btm;
    }
    printf("Total Marks Scored by Student B is %d\n", bsum);
    printf("Total Percentage Scored by Student B is %d\n", bpercent);
    
    if(bpercent>=90){
	printf("Grade of Student B is A");
	}else if(bpercent<90 && bpercent>=75){
	printf("Grade of Student B is B");
	}else if(bpercent<75 && bpercent>=55){
	printf("Grade of Student B is C");
	}else if(bpercent<55 && bpercent>=35){
	printf("Grade of Student B is D");
	}else{
	printf("Grade of Student B is F");
	}
	printf("\n");
	
//Student C
	int c[s], csum=0, ctm, cpercent;
    printf("Enter Marks Out of 100: \n");
    
	for(int i=0; i<s; i++)
	{
	printf("c[%d]= ",i);
	scanf("%d",&c[i]);
	csum+=c[i];
	ctm=s*100;
	cpercent=csum*100/ctm;
    }
    printf("Total Marks Scored by Student C is %d\n", csum);
    printf("Total Percentage Scored by Student C is %d\n", cpercent);
    
    if(cpercent>=90){
	printf("Grade of Student C is A\n");
	}else if(cpercent<90 && cpercent>=75){
	printf("Grade of Student C is B\n");
	}else if(cpercent<75 && cpercent>=55){
	printf("Grade of Student C is C\n");
	}else if(cpercent<55 && cpercent>=35){
	printf("Grade of Student C is D\n");
	}else{
	printf("Grade of Student C is F\n");
	}
	
//Student D
	int d[s], dsum=0, dtm, dpercent;
    printf("Enter Marks Out of 100: \n");
    
	for(int i=0; i<s; i++)
	{
	printf("d[%d]= ",i);
	scanf("%d",&d[i]);
	dsum+=d[i];
	dtm=s*100;
	dpercent=dsum*100/dtm;
    }
    printf("Total Marks Scored by Student D is %d\n", dsum);
    printf("Total Percentage Scored by Student D is %d\n", dpercent);
    
    if(dpercent>=90){
	printf("Grade of Student D is A\n");
	}else if(dpercent<90 && dpercent>=75){
	printf("Grade of Student D is B\n");
	}else if(dpercent<75 && dpercent>=55){
	printf("Grade of Student D is C\n");
	}else if(dpercent<55 && dpercent>=35){
	printf("Grade of Student D is D\n");
	}else{
	printf("Grade of Student D is F\n");
	}
	
//Student E
	int e[s], esum=0, etm, epercent;
    printf("Enter Marks Out of 100: \n");
    
	for(int i=0; i<s; i++)
	{
	printf("e[%d]= ",i);
	scanf("%d",&e[i]);
	esum+=e[i];
	etm=s*100;
	epercent=esum*100/etm;
    }
    printf("Total Marks Scored by Student A is %d\n", esum);
    printf("Total Percentage Scored by Student A is %d\n", epercent);
    
    if(epercent>=90){
	printf("Grade of Student E is A\n");
	}else if(epercent<90 && epercent>=75){
	printf("Grade of Student E is B\n");
	}else if(epercent<75 && epercent>=55){
	printf("Grade of Student E is C\n");
	}else if(epercent<55 && epercent>=35){
	printf("Grade of Student E is D\n");
	}else{
	printf("Grade of Student E is F\n");
	}
	printf("\n");


}