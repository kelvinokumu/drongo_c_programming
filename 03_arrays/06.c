#include <stdio.h>

void main()
{
    int i, j, m, n;
    printf("How many rows do you want \n");
    scanf("%i", &m);
    printf("How many column do you want \n");
    scanf("%i", &n);        
    int A[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter an element \n");
            scanf("%d", &A[i][j]);
        }
    }

    printf("Printing values \n");
    for (i = 0; i < m; i++)
    {
        printf("First row \n");
        for (j = 0; j < n; j++)
        {
            printf("%d \t", A[i][j]);
        }
    }
}