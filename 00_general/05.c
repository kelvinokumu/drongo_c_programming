#include <stdio.h>

int main() {
    char grade;
    int fnum;

    printf("Enter your grade: ");
    scanf(" %c", &grade); 
    // Notice the space before %c to 
    // consume any leading whitespace
    printf("Enter a number ");
    scanf("%d",&fnum);

    printf("Your grade is: %c\n", grade);
    printf("Your number is: %d\n", fnum);

    return 0;
}
