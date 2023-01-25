#include <stdio.h>
#include <math.h>

void main()
{
    printf("Enter number of days \n");
    int n_year = 365, a_week = 7;
    int total_days, weeks, days, years;
    scanf("%i", &total_days);

    years = total_days / n_year;
    printf("The years are %i \n", years);

    weeks = (total_days % n_year) / a_week;
    printf("The weeks are %i \n", weeks);

    days = (total_days % n_year) % a_week;
    printf("The days are %i \n", days);
    int x = sqrt(49);
    printf("%i", x);
}