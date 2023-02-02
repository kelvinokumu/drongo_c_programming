#include <stdio.h>
#include <string.h>
union Emp
{
    float F;
    char X;
} e;

int main()
{
    union Emp e;
    e.F = 2.0;
    e.X = 'a';

    return 0;
}
