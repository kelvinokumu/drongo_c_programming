#include<stdio.h>

// defines multiplication of 2 numbers and returns an output
#define SQR(a, b) (a * b)
#define sub(c, d) (c - d)

int main() {
	int num, num2;
	
	printf("Enter first number : ");
	scanf("%d", &num);

	printf("Enter second number : ");
	scanf("%d", &num2);
	
	
	// SQR(num) replaces square of num in the output
	printf("%d * %d = %d \n", num, num2, SQR(num, num2));
	printf("%i - %i = %i \n",num, num2, sub(num, num2));
	
	return 0;
}
