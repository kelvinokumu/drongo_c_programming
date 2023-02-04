#include<stdio.h>
void main()
{
    int i, j, n = 3;
    for (i = 0; i < n; i++)
    {
        
        for (j = 0; j < n; j++)
        {
            printf("row value of i %i \n", i);
            printf("column value of j %i \n", j);
        }
        printf("\n\n");
    }
}