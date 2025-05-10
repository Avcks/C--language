#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    int l, b;
    int a[100];

    printf("Enter any string: ");
    gets(s);

    l=strlen(s);

    printf("Frequency of each letter:\n");

    for(int i=0; i<l; i++) {
        if(a[i]==1)
        continue;
        b=1;
        for(int j=i+1; j<l; j++) {
            if (s[i]==s[j]) {
            b++;
            a[j] = 1;
            }
        }
    printf("%c => %d\n", s[i], b);
    }
}



/*
Enter any string: development
Frequency of each letter:
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/
