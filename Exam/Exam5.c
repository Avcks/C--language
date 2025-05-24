#include <stdio.h>
struct Car 
{
    char model[50];
    int year;
    int price;
};

int main() 
{
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car a[n];

    for(int i=0; i<n; i++) 
	{
        printf("\nEnter details for car %d:\n", i+1);
        printf("Model: ");
        scanf("%s", &a[i].model);
        printf("Year: ");
        scanf("%d", &a[i].year);
        printf("Price: ");
        scanf("%d", &a[i].price);
    }

    printf("\n\nCar Details:\n");
    for(int i=0; i<n; i++) 
	{
        printf("\nCar %d:\n", i+1);
        printf("Model: %s\n", a[i].model);
        printf("Year: %d\n", a[i].year);
        printf("Price: %d\n", a[i].price);
    }

}

/*
Enter the number of cars: 2

Enter details for car 1:
Model: 12345
Year: 2015
Price: 200000

Enter details for car 2:
Model: 67890
Year: 2010
Price: 12234


Car Details:

Car 1:
Model: 12345
Year: 2015
Price: 200000

Car 2:
Model: 67890
Year: 2010
Price: 12234
*/