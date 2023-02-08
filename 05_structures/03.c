#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int number;
    char section;
};

void main()
{

    // created variable student1 for structure Student
    struct Student student1;

    // accessing student1 member and initializing them
    strcpy(student1.name, "Kelvin");
    student1.number = 1;
    student1.section = 'A';

    // printing values
    printf("Student Name : %s\n", student1.name);
    printf("Student Class : %d\n", student1.number);
    printf("Student Section : %c\n", student1.section);

    // return 0;
}
