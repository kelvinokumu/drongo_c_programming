#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
    double cel, far;
    printf("Enter temp in Fahrenheit \n");
    scanf("%lf", &far);

    cel = ((far - 32) * (5.0/9));
    printf("%.2lf \n", cel);

    int root = sqrt(144);
    printf("%i \n", root);

}