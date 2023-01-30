// C program to compute sum of digits in number.
#include <stdio.h>

int main()
{
	int n;
	printf("Enter an integer \n");
	scanf("%i",&n);
	// Function call
	int sum = 0;
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
		printf("%i \n", sum);
	}
	// return sum;
	printf(" %d \n", sum);
	return 0;
}
