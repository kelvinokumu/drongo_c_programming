#include <stdio.h>
#include <math.h>

double quadratic(double a, double b, double c);

void main()
{
    quadratic(4, 8, 2);
}

double quadratic(double a, double b, double c)
{
    double ds = sqrt(b * b - 4 * a * c);

    double root1 = (-b + ds)/ (2 * a);
    double root2 = (-b - ds)/ (2 * a);

    printf("%lf \n", root1);
    printf("%lf \n", root2);

}