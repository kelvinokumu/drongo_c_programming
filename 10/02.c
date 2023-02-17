#include <stdio.h>

int openAccount();
int withdraw();

int x = 0;
static int y = 0;

void main()
{
    openAccount();
    printf("Withdraw \n");
    withdraw();
}

int openAccount()
{
    int abc = 258;
    withdraw(abc);
    printf("%i \n", x);
    printf("%i \n", y);
    x = x + 5000;
    y = y + 5000;
    printf("%i \n", x);
    printf("%i \n", y);
}

int withdraw()
{
    x = x - 3500;
    y = y - 3500;
    printf("%i \n", x);
    printf("%i \n", y);
}