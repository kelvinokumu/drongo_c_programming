#include<stdio.h>

// this is my main function
void main(){
    double number = 1500, percentage;
    scanf("%lf", &number);
    
    percentage = number * 0.3;
    printf("The percent of a number is %.2lf \n", percentage);

}