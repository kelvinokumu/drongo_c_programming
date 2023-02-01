#include <stdio.h>

int sum();
int sum2(int n1, int n2);

void main()
{
    printf("Functions \n");
    sum();
    sum2(18, 25);
}

int sum()
{
    int n1 = 300;
    int n2 = 12;
    int sum = n1 + n2;
    printf("The sum is %i \n", sum);
}

int sum2(int n1, int n2)
{
    // int n1 = 9;
    // int n2 = 12;
    int sum = n1 + n2;
    printf("The sum is %i \n", sum);
}