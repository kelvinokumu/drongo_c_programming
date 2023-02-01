#include<stdio.h>

int calculation(int num1, int num2);

void main(){
    int v1, v2, calc;
    printf("Enter first number \n");
    scanf("%i", &v1);
    printf("Enter second number \n");
    scanf("%i", &v2);

    calc = calculation(v1, v2);
    printf("The answer is %i \n", calc);
}

int calculation(int num1, int num2){
    int answer = num1 * num2;
    return answer;
}