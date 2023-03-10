#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    // printf("Enter first  number:\n");
    // scanf("%f",&valueOne);

    // printf("Enter second  number:\n");
    // scanf("%f",&valueTwo);

    // printf("Enter symbol for calculation");
    // scanf("%c",&operator);

    printf("Enter calculation:\n");
    scanf("%f %c %f", &valueOne, &operator, & valueTwo);

    switch (operator)
    {
    case '/':
        answer = valueOne / valueTwo;
        break;
    case '*':
        answer = valueOne * valueTwo;
        break;
    case '+':
        answer = valueOne + valueTwo;
        break;
    case '-':
        answer = valueOne - valueTwo;
        break;
    case '^':
        answer = pow(valueOne, valueTwo);
        break;
    case 's':
        answer = sqrt(valueTwo);
        break;
    default:
        goto fail;
    }
    printf("%.9g %c %.9g =  %.6g\n\n", valueOne, operator, valueTwo, answer);
    goto exit;
fail:
    printf("Fail.\n");
exit:
    return 0;
}