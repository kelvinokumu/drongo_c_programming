#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);

    float sum = num1 + num2;
    printf("Sum: %.2f\n", sum);

    return 0;
}

