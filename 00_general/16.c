#include <stdio.h>

int findMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {12, 45, 6, 27, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maxNum = findMax(numbers, size);
    printf("Maximum Number: %d\n", maxNum);

    return 0;
}
