#include <stdio.h>
int add_values();

int main()
{
    add_values();
    return 0;
}

int add_values()
{
    int x = 5, y = 15;
    printf("The sum is %i \n", x + y);
}