#include <stdio.h>

// Multidimensional Arrays
void main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    // int arr[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};

    int a = arr[1][2];
    printf("%i \n", a);
}