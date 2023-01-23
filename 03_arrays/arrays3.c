#include <stdio.h>

int farrays();

void main()
{
    farrays();
}

int farrays()
{
    int max;

    printf("How many inputs do you need \n");
    scanf("%i", &max);
    int array_numbers[max];
    // receiving inputs
    for (int i = 0; i < max; i++)
    {
        int number;
        scanf("%i", &number);
        array_numbers[i] = number;
        printf("The values at index %i is %i \n", i, number);
    }

    printf("Printing the values \n");
    for (int i = 0; i < max; i++)
    {
        printf("%i \n", array_numbers[i]);
    }
}



