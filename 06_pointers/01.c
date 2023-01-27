#include<stdio.h>

void main(){
    // int *n2;
    // int* n2;
    // int * n2;

    int a = 45;
    int *y; // = &a; // declare variable y as a pointer
    
    y = &a;

    printf("%i \n", a);
    printf("%i \n", *y);

    *y = 75; // change the address of to point to 75

    printf("%i \n", a);
    printf("%i \n", *y);


}