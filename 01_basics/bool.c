#include <stdio.h>
#include <stdbool.h>

void main()
{
    printf("Start \n");

    // declare a variable login of type boolean and assign it to false
    bool login = false;

    if (login == true)
    {
        printf("success \n");
    }
    else if(login != true)
    {
        printf("Wrong password or email \n");
    }
}