#include <stdio.h>

int random(int n);

void main()
{
    int a, z;
    scanf("%i", &a);
    z = random(a);
    printf("%i", z);
}

int random(int n)
{
    return n;
}