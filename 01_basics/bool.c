#include <stdio.h>
#include <stdbool.h>

void main()
{
    printf("Start \n");
    bool login = false;
    if (!login)
    {
        printf("success \n");
    }
    else
    {
        printf("Wrong password or email \n");
    }
}