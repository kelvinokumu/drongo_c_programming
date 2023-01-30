#include<stdio.h>

#define pie 3.142

double fractions();

void main(){
    printf("Inside main \n");
    printf("%.2lf \n", pie);
    fractions();
}

double fractions(){
    printf("Inside second function \n");
    printf("%.2lf \n", pie);
}