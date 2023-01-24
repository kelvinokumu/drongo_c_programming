#include<stdio.h>

int calculation();

void main(){
    int v1, v2;
    printf("Enter first number \n");
    scanf("%i", &v1);
    printf("Enter second number \n");
    scanf("%i", &v2);
// 
    int kelvin = calculation(v1,v2);
    printf("The answer is %i \n", kelvin);
}

int calculation(int num1, int num2){
    int answer = num1 * num2;
    return answer;
}