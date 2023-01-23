#include<stdio.h>

void main(){
    int sum, fn,  sn;
    double duration;
    char a;
    char user_name[8];

    printf("Enter first number \n");
    scanf("%i", &fn);

    printf("Enter second number \n");
    scanf("%i", &sn);

    sum = fn + sn;

    printf("The sum is %i \n", sum);
    // printf("%c \n", a);
    // printf("%s \n", user_name);
}