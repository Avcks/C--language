#include <stdio.h>

int main() 
{
    int i,j,k,l;
    int a,b,c,d;
    for (a = 0; a <= 5; a++) 
    {

        for (b = 1; b <= 5 - a; b++) 
        {
            printf("%d", b);
        }

        for (c = 0; c < 2 * a; c++) 
        {
            printf(" ");
        }

        for (d = 5 - a; d > 0; d--) 
        {
            printf("%d", d);
        }
    printf("\n");   
    }
    
    for (i = 5; i >= 0; i--) 
    {

        for (j = 1; j <= 5 - i; j++) 
        {
            printf("%d", j);
        }

        for (k = 0; k < 2 * i; k++) 
        {
            printf(" ");
        }

        for (l = 5 - i; l > 0; l--) 
        {
            printf("%d", l);
        }

        printf("\n");
    }
}
