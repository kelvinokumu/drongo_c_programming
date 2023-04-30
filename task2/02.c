// Write a program that prompts the user to enter in a number of days. Your program should then
// compute the number of years, weeks, and days that number represents. For this exercise, ignore leap
// years (thus all years are 365 days). Your output should look something like the following.
// 2345 days 
// years
// weeks
// days 

#include<stdio.h>

void main()
{
    int total_days, years, weeks, days;
    printf("Enter total number of days \n");
    scanf("%i", &total_days);

    years = total_days / 365;
    printf("Years %i \n", years);

    weeks = (total_days % 365)/7;
    printf("Weeks %i \n", weeks);

    days = (total_days % 365) % 7;
    printf("Days %i \n",days);
}