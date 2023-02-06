#include <stdio.h>

void main()
{
    int x = 125;
    if (x < 80 || x < 100)
    {
        printf("Grade is A \n");
    }
    else if (x < 10)
    {
        printf("X is less than 10 \n");
    }
    else
    {
        printf("X is 10 \n");
    }
}
