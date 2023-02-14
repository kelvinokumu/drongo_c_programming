#include <stdio.h>

void main()
{
    printf("Start \n");
    int number;           // Declare a variable number of type integer
    number = 147;         // assign an integer number to the variable
    int number2 = 369; // declare a variable and assign a value
    
    // %i - integer
    printf("%i \n%d\n", number, number2);

    // %f - float, %lf - double
    double salary = 258.14952;
    float salary2 = 78.66789;
    printf("%.2lf  %.4f\n", salary, salary2);

    // %c - character
    char grade = 'A';
    printf("%c \n",grade);

    // %s - string(collections of characters)
    char name[10] = "Kelvin";
    printf("%s \n",name);
}