#include <stdio.h>

void main()
{
    int i, j, row, columns;

    printf("How many rows do you want \n");
    scanf("%i", &row);
    
    printf("How many column do you want \n");
    scanf("%i", &columns);     
    
    int A[row][columns];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter an element \n");
            scanf("%d", &A[i][j]);
        }
    }

    printf("Printing values \n");
    for (i = 0; i < row; i++)
    {
        printf("First row \n");
        for (j = 0; j < columns; j++)
        {
            printf("%d \t", A[i][j]);
        }
    }
}