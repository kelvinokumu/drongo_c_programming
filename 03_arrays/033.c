#include <stdio.h>

void main()
{
    printf("Drongo \n");
    int numbers[5];

    // get values
    for (int counter = 0; counter < 5; counter++)
    {
        printf("Enter a number : \n");
        scanf("%i",&numbers[counter]);
    }

    // display values
    for (int counter = 0; counter < 5; counter++)
    {
        printf("Number is %i \n",numbers[counter]);
    }
}