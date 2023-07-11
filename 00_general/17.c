#include <stdio.h>

void printFibonacci(int n) {
    int num1 = 0, num2 = 1, nextTerm;
    printf("Fibonacci Series: %d, %d, ", num1, num2);

    for (int i = 3; i <= n; i++) {
        nextTerm = num1 + num2;
        printf("%d, ", nextTerm);
        num1 = num2;
        num2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms = 10;
    printFibonacci(terms);

    return 0;
}
