#include <stdio.h>

int main() 
{
    int num, fd, ld, sum;

    printf("Enter any number: ");
    scanf("%d", &num);
    ld = num % 10;

    while (num >= 10) { 
        num = num / 10;
    }
    
    fd = num;
    sum = fd + ld;
    printf("The sum of the first and last digits is: %d\n", sum);

}

//input: Enter any number: 384
//output: The sum of the first and last digits is: 7