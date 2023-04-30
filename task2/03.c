// A BOGO (Buy-One, Get-One) sale is a promotion in which a person buys two items and receives a
// 50% discount on the less expensive one. Write a program that prompts the user for the cost of two
// items, computes a 50% discount on the less expensive one, and then computes a grand total

// 1000
// 700

#include<stdio.h>

void main()
{
    int p1, p2, discount, total;
    printf("Enter price of the first product \n");
    scanf("%i", &p1);
    printf("Enter price of the second product \n");
    scanf("%i", &p2);

    if(p1 > p2)
    {
        discount = p2 * 0.5;
        total = p1 + discount;
    }
    else{
        discount = p1 * 0.5;
        total = p2 + discount;
    }
    printf("The total is %i \n", total);
}