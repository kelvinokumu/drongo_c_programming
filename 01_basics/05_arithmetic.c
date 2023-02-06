#include <stdio.h>

void main()
{
    int a = 10, b = 20, c = 30, d;

    printf("Addition \n");
    d = c + a + b;
    printf("%i \n", d);

    printf("Subtraction \n");
    d = c + a - b;
    printf("%i \n", d);

    printf("Multiplication \n");
    d = c + a * b;
    printf("%i \n", d);

    printf("Division \n");
    d = c + a / b;
    printf("%i \n", d);

    printf("Modulo \n");
    d = c % 7;
    printf("%i \n", d);
}