#include <stdio.h>

void main()
{
    int number, answer;
    printf("Enter a number to calculate its square : ");
    scanf("%i", &number);
    answer = number * number;
    printf("The square is %i \n", answer);
}