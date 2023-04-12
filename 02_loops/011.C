#include<stdio.h>

int main()
{

    /*
    for(initialization; condition; increment/decrement)
    {
        body of the loop
    }
    
    */ 
    // body of the function
    printf("before the loop \n");
    for(int num = 5; num >= 0; num--)
    {
        printf("Hello %i \n", num);
        // infinite loop
    }

    printf("after the loop \n");

    return 0;
}