#include <stdio.h>

int main() {
    int num;
    long bigNum;
    unsigned int positiveNum;
    unsigned long positiveBigNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a big integer: ");
    scanf("%ld", &bigNum);

    printf("Enter a positive integer: ");
    scanf("%u", &positiveNum);

    printf("Enter a positive big integer: ");
    scanf("%lu", &positiveBigNum);

    printf("Values entered:\n");
    printf("Integer: %d\n", num);
    printf("Big Integer: %ld\n", bigNum);
    printf("Positive Integer: %u\n", positiveNum);
    printf("Positive Big Integer: %lu\n", positiveBigNum);

    return 0;
}
