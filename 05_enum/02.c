#include <stdio.h>
enum day
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    enum day d = wednesday;
    printf("The day number stored in d is %d \n", d);

    if (d == wednesday)
    {
        printf("wednesday \n");
    }

    return 0;
}
