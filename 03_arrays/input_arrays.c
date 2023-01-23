#include<stdio.h>

void main(){
    int score[10];
    printf("Receive the values \n");
    for(int i = 0; i < 10; i++){
        printf("Enter a number \n");
        scanf("%i", &score[i]);
        // printf("%i \n", score[i]);

    }

    printf("Printing the values of an array \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%i \n", score[i]);
    }

}