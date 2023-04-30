#include <stdio.h>

void main()
{
    printf("Start \n");
    int number; // declare a variable
    printf("Enter a number \n");
    scanf("%i",&number); // recieve the number
    printf("The number is %i\n", number); // print display the number

    double salary;
    float salary2;
    printf("Enter a number with a decimal place \n");
    scanf("%lf",&salary);
    printf("The number with decimal is %.2lf\n",salary);

    char grade;
    printf("Enter a character \n");
    scanf(" %c",&grade); // space needed before the %c
    printf("%c \n",grade);
    
    printf("Enter your name \n");
    char name[10] = "Kelvin";
    scanf("%s",name);
    printf("Your name is %s \n",name);
}