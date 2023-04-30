// given an array of numbers calculate how many odd and how many even
#include<stdio.h>

void main()
{
    int numbers[] = {11,12,13,14,15,16,17,18,19,20};
    int odd = 0, even = 0;
    for(int i = 0; i < 10; i++)
    {
        // printf("%i \n",numbers[i]);
        if(numbers[i] % 2 == 0)
        {
            even = even + 1; // even += 1;
            printf("even %i \n",even);
        }
        else{
            odd = odd + 1;
            printf("odd %i \n",odd);
        }
    }
    // printf("even %i \n",even);
    // printf("odd %i \n",odd);
}