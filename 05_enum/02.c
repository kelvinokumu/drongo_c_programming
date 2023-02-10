#include <stdio.h>
typedef enum
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
}day;

int main()
{
    day d = wednesday;
    printf("The day number stored in d is %d \n", d);

    // if (d == wednesday)
    // {
    //     printf("wednesday \n");
    // }

    // return 0;
}
