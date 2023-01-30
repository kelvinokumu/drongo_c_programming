#include <stdio.h>
#include <stdbool.h>

void main()
{
    printf("Start \n");
    bool login = false;
    
    if (false == true)
    {
        printf("success \n");
    }
    else if(login != true)
    {
        printf("Wrong password or email \n");
    }
}