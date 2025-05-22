#include<stdio.h>

int main()
{
	FILE *p;
	FILE *q;

	p=fopen("even.txt","w");
	q=fopen("old.txt","w");
	if(p==NULL)
	{
		printf("file not found.");
	}else{
		printf("file found.");
		for(int i=50; i<=70; i++){
		    if(i%2==0){
			    fprintf(p,"%d, ",i);
		    }else{
		    	fprintf(q,"%d, ",i);
			}	
		}
		printf("\nwrite success");
	fclose(p);
	fclose(q);
    }	
}


/*

in terminal:
file found.
write success

in file
       in old.txt
        51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 
       in even.txt
         50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 
*/