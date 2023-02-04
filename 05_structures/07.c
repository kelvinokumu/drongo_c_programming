#include <stdio.h>
#include <string.h>

// declaring structure
struct struct_example
{
    int integer;
    float decimal;
    char name[20];
};

// declaring union
union union_example
{
    int integer;
    float decimal;
    char name[20];
};

void main()
{
    // creating variable for structure and initializing values difference six
    struct struct_example s = {18, 38, "drongo"};

    // creating variable for union and initializing values
    union union_example u = {18, 38, "drongo"};

    printf("structure data:\n integer: %d\n"
           "decimal: %.2f\n name: %s\n",
           s.integer, s.decimal, s.name);

    printf("\n union data:\n integer: %d\n"
           "decimal: %.2f\n name: %s\n",
           u.integer, u.decimal, u.name);

    // difference two and three
    printf("\n sizeof structure : %ld\n", sizeof(s));
    printf("sizeof union : %ld\n", sizeof(u));

    // difference five
    printf("\n Accessing all members at a time:");
    s.integer = 183;
    s.decimal = 90;
    strcpy(s.name, "drongo");

    printf("structure data:\n integer: %d\n "
           "decimal: %.2f\n name: %s\n",
           s.integer, s.decimal, s.name);

    u.integer = 183;
    u.decimal = 90;
    strcpy(u.name, "drongo");

    printf("\n union data:\n integer: %d\n "
           "decimal: %.2f\n name: %s\n",
           u.integer, u.decimal, u.name);

    printf("\n Accessing one member at time:");

    printf("\n structure data:");
    s.integer = 240;
    printf("\n integer: %d", s.integer);

    s.decimal = 120;
    printf("\n decimal: %f", s.decimal);

    strcpy(s.name, "C programming");
    printf("\n name: %s\n", s.name);

    printf("\n union data:");
    u.integer = 240;
    printf("\n integer: %d", u.integer);

    u.decimal = 120;
    printf("\n decimal: %f", u.decimal);

    strcpy(u.name, "C programming");
    printf("\n name: %s\n", u.name);

    // difference four
    printf("\nAltering a member value:\n");
    s.integer = 1218;
    printf("structure data:\n integer: %d\n "
           " decimal: %.2f\n name: %s\n",
           s.integer, s.decimal, s.name);

    u.integer = 1218;
    printf("union data:\n integer: %d\n"
           " decimal: %.2f\n name: %s\n",
           u.integer, u.decimal, u.name);
}
