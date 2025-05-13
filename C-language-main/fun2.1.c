#include <stdio.h>

int add(int a[], int s) {
    int sum=0;
    for (int i=0; i<s; i++) {
        sum+=a[i];
    }
    return sum;
}

int main() {
    int s;

    printf("Enter array size: ");
    scanf("%d", &s);
    printf("\n");
    int a[s];

    printf("Enter array elements:\n");
    for (int i=0; i<s; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\n");

    int total=add(a, s);
    printf("The sum of an Array: %d\n", total);
}
