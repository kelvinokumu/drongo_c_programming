#include <stdio.h>

void countDown(int n);

void main()
{
    int n = 10;
    countDown(n);
}

void countDown(int n)
{
    if (n == 0)
    {
        printf("Happy New Year!\n");
    }
    else
    {
        printf("%d\n", n);
        countDown(n - 1);
    }
}

// int recSum(const int *arr, int size, int i)
// {
//     if (i == size)
//     {
//         return 0;
//     }
//     else
//     {
//         return recSum(arr, size, i + 1) + arr[i];
//     }
// }

// int recSumTail(const int *arr, int size, int i, int sum)
// {
//     if (i == size)
//     {
//         return sum;
//     }
//     else
//     {
//         return recSumTail(arr, size, i + 1, sum + arr[i]);
//     }
// }

