// Write a c program to find the square of a number.

#include<stdio.h>

void main()
{
    int number, square;
    printf("Enter a number to get its square \n");
    scanf("%i",&number);
    square = number * number;
    printf("%i \n", square);
}