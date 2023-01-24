#include <stdio.h>

int sum();

void main()
{
    printf("Functions \n");
    sum(18, 25);
}

int sum(int n1, int n2)
{
    // int n1 = 9;
    // int n2 = 12;
    int sum = n1 + n2;
    printf("The sum is %i \n", sum);
}