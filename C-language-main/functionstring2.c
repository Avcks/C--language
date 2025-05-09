#include<stdio.h>
#include<string.h>
int main(){
	char email[] = "admin@gmail.com";
	char password[] = "password@101";
	
	char semail[100];
	char spassword[100];
	printf("Enter Your Email: ");
	gets(semail);
    printf("Enter Your Password: ");
	gets(spassword);
	
	if(strcmp(email,semail)==0 && strcmp(password,spassword)==0){
		printf("Login SuccessFull....");
	}else{
		printf("Login Failed. Invalid Credetials.");
	}
	
}