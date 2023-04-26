#include<stdio.h>

int sum();
int mult(int num3, int num4);

void main()
{
    printf("hello world \n");
    int answer = sum();
    printf("The total is %i \n",answer);
    int answer2 = mult(23, 78);
    printf("The product is %i \n",answer2);
}

// function with a return type
int sum()
{
    printf("this is sum \n");
    int num, num2, total;
    printf("Enter an integer \n");
    scanf("%i", &num);
    printf("Enter the second integer \n");
    scanf("%i", &num2);
    total = num + num2;

    return total;
}


// function with arguments and return type
int mult(int num3, int num4)
{
    printf("calculation \n");
    int total = num3 * num4;
    
    return total;
}

