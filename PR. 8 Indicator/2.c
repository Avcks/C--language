#include <stdio.h>

int c(int *p, int s)
{
    for (int i=0; i<s*s; i++) 
	{
        printf("%d  ", (*(p+i)) * (*(p+i)) * (*(p+i)));
    }
    printf("\n");
    return;
}

int main() 
{
    int s;
    printf("Enter array's size: ");
    scanf("%d", &s);

    int a[s][s];


    printf("Enter array elements:\n");
    for (int i=0; i<s; i++) {
        for (int j=0; j<s; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("Cube of all elements:\n");
    c(&a[0][0], s);



}
/*
Enter array's s: 2
Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4
har of all elements:
27      8       125     64
*/