#include<stdio.h>
#include<string.h>
int main(){
	char s[100];

	int a=0, b=0, c=0;
	
	printf("Enter Your Password: ");
	gets(s);
	
	puts(s);
	
	if(strlen(s)<6){
		printf("Your Password Must contain At least 6 Charaters");
	}else{
		for(int i=0; s[i]!='\0'; i++){
			if((s[i]>='A' && s[i]<='Z')){
				a=1;
			}

			if((s[i]>='!' && s[i]<='/') || (s[i]>=':' && s[i]<='@')){
				b=1;
			}
			
			if((s[i]>='0' && s[i]<='9')){
				c=1;
			}
		}
		if (a==1 && b==1&& c==1){
			printf("Your Password is Strong");
		}else{
			printf("Your Password is Not Strong");
		}
	}
}