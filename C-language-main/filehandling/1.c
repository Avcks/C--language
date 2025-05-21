#include<stdio.h>

int main()
{
	FILE *p;
	FILE *q;
	char ch[500];
	int data[500];
	
	p=fopen("1.txt","r");
	q=fopen("2.txt","a");
	if(p==NULL)
	{
		printf("file not found.");
	}else{
		printf("file found.");

		while (fgets(ch, 500,p)!= NULL) {
            fputs(ch, q);
        }	
		printf("\nwrite success");
		fclose(p);
		fclose(q);
	}
}
