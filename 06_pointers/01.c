#include<stdio.h>

void main(){
    // int *n2;
    // int* n2;
    // int * n2;

    int a = 45;
    int *y = &a;

    printf("%i \n", a);
    printf("%i \n", *y);

    *y = 75;

    printf("%i \n", a);
    printf("%i \n", *y);


}