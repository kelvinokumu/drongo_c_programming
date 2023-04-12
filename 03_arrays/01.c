#include <stdio.h>

void main()
{
    printf("Arrays \n");
    // collection of same data type

    int x = 7;
    // printf("%i \n", x);
    int score1 = 80;
    int score2 = 85;
    int score3 = 90;
    int score4 = 85;
    int score5 = 90;

    int math_score2[5]; // declaration

    int math_score[] = {60, 70, 80, 90, 100}; //declaration and assignment

    int score[10];
    int marks[] = {90, 92, 95, 85, 80};

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Drongo %i \n", i);
    // }

    int nums[10] = {40, 51, 62, 73, 74, 77, 69, 85, 100, 96};

    printf("manually \n");
    printf("%i \n", nums[0]);
    printf("%i \n", nums[1]);
    printf("%i \n", nums[2]);
    printf("%i \n", nums[3]);
    printf("%i \n", nums[4]);
    printf("%i \n", nums[5]);
    printf("%i \n", nums[6]);
    printf("%i \n", nums[7]);
    printf("%i \n", nums[8]);
    printf("%i \n", nums[9]);

    int customer = 10;
    printf("using a for loop \n");
    for (int i = 0; i < customer; i++)
    {
        printf("%i \n", nums[i]);
    }
}