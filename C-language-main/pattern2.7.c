#include <stdio.h>

int main() 
{
    int i,j,k,l;
    for (i = 0; i<5; i++) 
    {

        for (j = 1; j<=5 - i; j++) 
        {
            printf("%d", j);
        }

        for (k = 0; k<2*i; k++) 
        {
            printf(" ");
        }

        for (l = 5 - i; l>0; l--) 
        {
            printf("%d", l);
        }

        printf("\n");
    }
}
