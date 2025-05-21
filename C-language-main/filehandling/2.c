#include<stdio.h>

int main()
{
	FILE *p;
	int data[500];
	p=fopen("div.txt","a");
	if(p==NULL)
	{
		printf("file not found.");
	}else{
		printf("file found.");
		for(int i=1; i<=50; i++){
			if(i%3==0 && i%5==0){
				fprintf(p,"%d ",i);
			}
		}
		printf("\nwrite success");
		fclose(p);
	}
}