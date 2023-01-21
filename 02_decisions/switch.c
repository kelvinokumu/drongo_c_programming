#include <stdio.h>

int sum();
int sub();

void main()
{
    printf("Start \n");
    int s = 2;
    switch (s)
    {
    case 1:
        printf("1 \n");
        sum();
        break;

    case 2:
        printf("5 \n");
        sub();
        break;

    default:
        printf("Not solution \n");
        break;
    }
    printf("Stop \n");
}

int sum(){
    printf("This is sum \n");
}

int sub(){
    printf("This is Subtraction \n");
}