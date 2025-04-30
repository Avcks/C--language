#include <stdio.h>

int main() {
int o,i,j,k,l;

    for (i=0; i<5; i++) 
    {
        for (k=0; k<i; k++) 
        {
            printf(" ");
        }

        for (j=5-i; j>0; j--) 
        {
            printf("%d", j);
            o=j;
        }
        for (l=o+1; l<=5-i; l++) 
        {
            printf("%d", l);
        }

        printf("\n");
    }

}
