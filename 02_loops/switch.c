#include <stdio.h>

void signup();

void main()
{
    int number;
    printf(" Enter a number between 1 and 3 \n");
    scanf("%i", &number);
    switch (number)
    {
    case 1:
        printf("Login \n");
        break;

    case 2:
        // printf("Signup \n");
        signup();
        break;

    case 3:
        printf("Forgot password");
        break;

    default:
        printf("Please select corrrect option \n");
        break;
    }

    printf("Outside \n");
}


void signup(){
    printf("User signing up \n");
}