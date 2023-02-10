#include <stdio.h>

void model1();
void model2();

void main()
{
    model1();
    model2();
}

void model1()
{
    printf("Model 1 \n\n");
    int pop = 500000;
    int growth = 50000;
    int year = 0;
    int condition = 2 * pop;
    while (pop < condition)
    {
        year = year + 1;
        pop = pop + growth;
    }
    printf("Year is %i \n", year);
    printf("population is %i \n", pop);
}

void model2(){
    printf("Model 2 \n\n");
    // int year = 0;
    // int pop = 1000;
    // int percent = 0.1;
    // int condition = 2 * pop;
    // while (pop < condition)
    // {
    //     year = year + 1;
    //     pop = pop + (pop * percent);
    //     printf("Year is %i \n", year);
    //     printf("population is %i \n", pop);
    // }
}