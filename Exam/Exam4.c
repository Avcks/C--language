#include <stdio.h>

int main()
{
    int arr[5];
	for(int i=0; i<5; i++){
		printf("arr[%d]:", i);
		scanf("%d",&arr[i]);
	}
	
    int *ptr = arr;
    printf("Your array: ");
    for (int i=0; i<5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    for (int i = 0; i<5; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i));
    }
    
    printf("Squared array: ");
    for (int i=0; i<5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

/*
arr[0]:1
arr[1]:2
arr[2]:3
arr[3]:4
arr[4]:5
Your array: 1 2 3 4 5
Squared array: 1 4 9 16 25
*/
