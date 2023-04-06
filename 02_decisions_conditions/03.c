#include<stdio.h>

void main()
{
    int grade = 72;

    if(grade > 80)
    {
        printf("A \n");
    }
    else if(grade > 70)
    {
        printf("B \n");
    }
    else if(grade > 60)
    {
        printf("C \n");
    }
    else
    {
        printf("Fail \n");
    }
    printf("do something new \n");
}

/*
if (true)
{
    statement
}
else if(true)
{
    statement
}
else
{
    statement
}
*/ 