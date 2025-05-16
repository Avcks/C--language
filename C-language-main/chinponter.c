#include <stdio.h>

int main() {
    int s;

    printf("Enter the array's size: ");
    scanf("%d", &s);

    int a[s];
    int *p=a;
    int **q=&p;

    printf("Enter array elements:\n");
    for(int i=0; i<s; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &(*q)[i]);
    }

    for(int i=0; i<s; i++) {
        (*q)[i] = (*q)[i]*(*q)[i];
    }


    printf("Reversed array elements:\n");
    for(int i = s-1; i>=0; i--) {
        printf("%d, ", (*q)[i]);

    }

}