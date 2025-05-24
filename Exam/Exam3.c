#include <stdio.h>

int main() 
{
    char str[100], t;
    int i=0, j;

    printf("Enter a string: ");
    scanf("%s", &str);

    while(str[i]!='\0') 
	{
        i++;
    }
    j=i-1;

    for(i=0; i<j; i++, j--) 
	{
        t = str[i];
        str[i] = str[j];
        str[j] = t;
    }
    printf("Reversed string: %s\n", str);
}

/*
Enter a string: hello
Reversed string: olleh
*/