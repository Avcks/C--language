#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0;

    printf("Create your password: ");
    scanf("%s", password);

    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        char ch = password[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            hasLetter = 1;
        else if (ch >= '0' && ch <= '9')
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    if (length >= 6 && hasLetter && hasDigit && hasSpecial) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }


}
