#include <stdio.h>

void main()
{
    printf("Start \n");
    int number;           // Declare a variable number of type integer
    number = 147;         // assign an integer number to the variable
    int number2 = 369.15; // declare a variable and assign a value

    printf("%i \n %d\n", number, number2);

    double salary = 258.14;
    float salary2 = 78.66;
    printf("%.2lf  %.2f\n", salary, salary2);
}