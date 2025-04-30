#include <stdio.h>

int main() 
{
    int i,j,k,l;
    for (i=5; i>=0; i--) 
    {
        for (j = 1; j<=5-i; j++) 
        {
            printf("%d", j);
        }
        
        for (k=1; k<=2*i;k++) 
        {
            printf(" ");
        }
        
        for (l=5-i; l>=1; l--) 
        {
            printf("%d", l);
        }
        printf("\n");
    }
}

/*

1        1
12      21
123    321
1234  4321
1234554321
*/