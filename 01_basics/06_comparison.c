#include <stdio.h>

void main()
{
    int b = 20, c = 30, d;

    printf("Greater than \n");
    d = c > b;
    printf("%i \n\n", d);

    printf("Less than \n");
    d = c < b;
    printf("%i \n\n", d);

    printf("Greater than or equal to \n");
    d = c >= b;
    printf("%i \n\n", d);

    printf("Less than or equal to \n");
    d = c <= b;
    printf("%i \n\n", d);
}