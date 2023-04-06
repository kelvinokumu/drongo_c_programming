#include <stdio.h>

void main()
{
    int num; // variable declaration
    printf("Enter a number between 1 and 4: \n");
    scanf("%i", &num);

    // this is a switch case

    /*
    this
    is
     program
    */
    switch (num)
    {
    case 1:
        // case 1
        printf("Statement 1 \n");
        break;
    case 2:
        // statement
        printf("Statement 2 \n");
        break;
    case 3:
        // statement
        printf("Statement 3 \n");
        break;
    case 4:
        // statement
        printf("Statement 4 \n");
        break;

    default:
        printf("Wrong value \n");
        break;
    }

    printf("outside switch \n");
}
