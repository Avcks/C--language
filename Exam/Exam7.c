#include <stdio.h>

int main() {
    int num;

    for (int i=1; i<=5; i++) {
        num = i * i;

        for (int j = 1; j<=5-i; j++) {
            printf(" ");
        }

        for (int j = 1; j<=i; j++) {
            printf("%d ", num);
        }

        printf("\n");
    }

}

/*
    1
   4 4
  9 9 9
 16 16 16 16
25 25 25 25 25
*/