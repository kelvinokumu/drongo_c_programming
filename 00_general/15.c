#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1;  // Even
    } else {
        return 0;  // Odd
    }
}

int main() {
    int num = 7;
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
