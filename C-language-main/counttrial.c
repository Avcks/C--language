#include <stdio.h>

int main() {
    long long n;
    long long temp;    
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        for (temp = n; temp != 0;) {
            count++;
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}