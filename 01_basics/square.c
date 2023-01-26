#include<stdio.h>

void main(){
    
    int square, input;
    printf("Enter a value to get its square \n");
    scanf("%i",&input);
    square = input * input;
    printf("The quare of %i is %i \n",input, square);
}