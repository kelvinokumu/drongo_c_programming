#include <stdio.h>

void main()
{
    printf("Arrays \n");

    int x = 7;
    printf("%i \n", x);
    int score1 = 80;
    int score2 = 85;
    int score3 = 90;

    int score[10];
    int marks[] = {90, 92, 95, 85, 80};

    for (int i = 0; i < 5; i++)
    {
        printf("Drongo %i \n", i);
    }

    int nums[10] = {40, 51, 62, 73, 74, 77, 69, 85, 100, 96};

    printf("%i \n", nums[0]);
    printf("%i \n", nums[1]);
    printf("%i \n", nums[2]);
    printf("%i \n", nums[3]);
    printf("%i \n", nums[4]);

    for (int i = 0; i < 10; i++)
    {
        printf("%i \n", nums[i]);
    }
}