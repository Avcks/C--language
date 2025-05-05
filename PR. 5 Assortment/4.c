#include <stdio.h>

int main() {
    int row, col, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int array[row][col];

    printf("Enter array's elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int rowNum;
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for(j = 0; j < col; j++) {
        printf("%d ", array[rowNum][j]);
        rowSum += array[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    int colNum;
    printf("Enter column number: ");
    scanf("%d", &colNum);

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for(i = 0; i < row; i++) {
        printf("%d ", array[i][colNum]);
        colSum += array[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

}





/*

Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
a[2][0] = 7
a[2][1] = 8
a[2][2] = 9
Enter row number: 0
Elements of row 0: 1 2 3
The sum of row 0: 6
Enter column number: 0
Elements of column 0: 1 4 7
The sum of column 0: 12

*/