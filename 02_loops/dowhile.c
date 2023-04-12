#include<stdio.h>

void main(){ 

    /*

    do{
        something
    }while(condition)

    */ 
    printf("Before do while \n");
    int i = 1;   //initialization
    do{
        printf("Drongo %i \n",i);
        i++; // increment/decrement
    }while(i < 10); // condition

    printf("After do while \n");
}