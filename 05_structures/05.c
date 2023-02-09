#include <stdio.h>

typedef struct car
{
    char make[20];
    char model[30];
    int year;
} car;

void main()
{
    car arr_car[] = {
        {"Audi", "TT", 2016},
        {"Bentley", "Azure", 2002},
        {"Merc", "S-class", 2016}};

    for (int i = 0; i < 2; i++)
    {
        printf("%s \n", arr_car[i].make);
    }
}
