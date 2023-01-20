#include <stdio.h>

void main()
{
    // int a = 1;
    // a = a + 1;
    // printf("%i \n", a);
    // a = a + 7;
    // printf("%i \n", a);
    // a += 100;
    // printf("%i \n", a);
    printf("Before the loop \n");
    for (int i = 10; i > 0; i--)
    {
        printf("%i \n", i);
        printf("Inside the loop \n");
    }
    printf("After the loop \n");

    int j = 10;
    while (j < 20)
    {
        printf("Inside while loop %i \n", j);
        j++;
    }

    int k = 0;
    do
    {
        printf("Inside do while loop %i \n", k);
        k++;
    } while (k < 5);
}