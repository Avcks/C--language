#include <stdio.h>

int main() {
    int row, col, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    printf("\n");

    int a[row][col];

    printf("Enter array's elements:\n");
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n");
    
    for(i=0; i<row; i++)
	{ 
	   for(int j=0; j<col; j++){
	   printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    
    printf("\n");
    
    int rowNum, colNum, rowSum = 0, colSum=0;
    
    printf("Enter row number: ");
    scanf("%d", &rowNum);


    printf("Elements of row %d: ", rowNum);
    for(j=0; j<col; j++) {
        printf("%d ", a[rowNum][j]);
        rowSum += a[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    printf("\n");

    printf("Enter column number: ");
    scanf("%d", &colNum);


    printf("Elements of column %d: ", colNum);
    for(i=0; i<row; i++) {
        printf("%d ", a[i][colNum]);
        colSum+=a[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

}





/*

Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 9
a[0][1] = 8
a[0][2] = 7
a[1][0] = 6
a[1][1] = 5
a[1][2] = 4
a[2][0] = 3
a[2][1] = 2
a[2][2] = 1

9 8 7
6 5 4
3 2 1

Enter row number: 2
Elements of row 2: 3 2 1
The sum of row 2: 6

Enter column number: 0
Elements of column 0: 9 6 3
The sum of column 0: 18

*/