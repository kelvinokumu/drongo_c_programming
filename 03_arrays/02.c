#include <stdio.h>

void main()
{
    printf("Arrays \n");
    int nums[5] = {40, 51, 62, 73, 74};
    int pass = 0, fail = 0;

    // printf("%i \n",nums[0]);
    // printf("%i \n",nums[1]);
    // printf("%i \n",nums[2]);
    // printf("%i \n",nums[3]);
    // printf("%i \n",nums[4]);

    for (int i = 0; i < 5; i++)
    {
        // printf("The index is %i and the values is %i \n", i, nums[i]);
        // printf("%i \n", nums[i]  * 10);
        if (nums[i] > 60)
        {
            // pass = pass + 1;
            pass += 1;
            // printf("Greater \n");
        }
        else
        {
            fail = fail + 1;
            // printf("Less than \n");
        }
    }
    printf("Pass %i \n", pass);
    printf("Fail %i \n", fail);
}