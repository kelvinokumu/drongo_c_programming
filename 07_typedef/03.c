#include<stdio.h>

// defines a function SQR(a) returning (a * a) and with 'a' being a parameter
#define SQR(a) (a * a)

int main() {
	int num;
	
	printf("Enter a number to find its square : ");
	scanf("%d", &num);
	
	
	// SQR(num) replaces square of num in the output
	printf("Square of %d : %d \n", num, SQR(num));
	
	return 0;
}
