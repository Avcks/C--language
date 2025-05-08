#include <stdio.h>
#include <string.h>

int main() {

    char cemail[] = "admin@gmail.com";
    char cpassword[] = "123456";
    
    char gemail[100];
    char gpassword[100];

    printf("Enter your email: ");
    scanf("%s", gemail);
    
    printf("Enter your password: ");
    scanf("%s", gpassword);
    
    printf("\n");
    
    if (strcmp(gemail, cemail) == 0 && strcmp(gpassword, cpassword) == 0) {
        printf("Login Successful...");
    } else {
        printf("Login Failed");
    }
}