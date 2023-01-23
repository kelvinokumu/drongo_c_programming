#include <stdio.h>

int sum(int n);
int factorial(int n);

int main()
{
    int number, result, result2;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);
    result2 = factorial(number);

    printf("sum = %d \n", result);
    printf("factorial = %d \n", result2);
    return 0;
}

int sum(int n)
{
    if (n != 0)
        // sum() function calls itself
        return n + sum(n - 1);
    else
        return n;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}