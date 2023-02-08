#include <stdio.h>

void countDown(int n);

void main()
{
    int n = 10;
    countDown(n);
}

void countDown(int n)
{
    if (n == 1000000)
    {
        printf("Happy New Year!\n");
    }
    else
    {
        printf("%i \n", n);
        countDown(n * 10);
    }
}