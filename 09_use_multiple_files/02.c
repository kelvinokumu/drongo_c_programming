// C program to illustrate file inclusion
// <> used to import system header file
#include <stdio.h>
#include <stdbool.h>

// " " used to import user-defined file
#include "login.h"

// main function
int main()
{
    bool lg = user_login(123);
    if (lg)
    {
        printf("Good \n");
        // home();
    }
    else
    {
        printf("Bad \n");
        // reset_password();
    }

    return 0;
}
