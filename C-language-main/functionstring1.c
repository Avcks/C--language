#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int letter = 0, digit = 0, special = 0;

    printf("Create your password: ");
    scanf("%s", password);

    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        char ch = password[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            letter = 1;
        else if (ch >= '0' && ch <= '9')
            digit = 1;
        else
            special = 1;
    }

    if (length >= 6 && letter && digit && special) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }
}