#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter any string: ");
    gets(a);
    int *p[100];
    for(int i=0; i<=strlen(a);i++){
    	p[i]=a[i];
	}
    int l=0;

    for (int i=0; p[l]!='\0'; i++) {
    l++;
    }

    printf("The length of the string is: %d\n", l);
}

/*
Enter any string: hello world
The length of the string is: 11
*/