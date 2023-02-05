#include <stdio.h>

void countDown(int n);

void main()
{
    int n = 10;
    countDown(n);
}

void countDown(int n)
{
    if (n == 0)
    {
        printf("Happy New Year!\n");
    }
    else
    {
        printf("%d\n", n);
        countDown(n - 1);
    }
}