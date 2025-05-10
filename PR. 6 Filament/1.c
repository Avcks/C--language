#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    int i, l, p = 1;

    printf("Enter any string: ");
    gets(s);
    l=strlen(s);
    for (i=0; i<l/2; i++) {
        if (s[i] != s[l-i-1]) {
            p = 0;
        }
    }
    if (p==0) {
        printf("The given string is not a Palindrome.\n");
    } else {
        printf("The given string is a Palindrome.\n");
    }
}

/*
Enter any string: aum
The given string is not a Palindrome.

Enter any string: nayan
The given string is a Palindrome.
*/
