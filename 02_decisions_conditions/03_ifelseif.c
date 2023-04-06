#include <stdio.h>

void main()
{
    // if else if
    int grade;
    printf("Enter your grade \n");
    scanf("%i",&grade);
    if (grade > 80)
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
    else if(grade > 50)
    {
        printf("D \n");
    }
    // else{
    //     printf("Fail \n");
    // }
}