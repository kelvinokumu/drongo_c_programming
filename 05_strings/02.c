#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    char s[10];
    int i = 0;
    printf("Enter a number or string\n");
    while ((ch = getchar()) != '\n')
    {
        s[i] = ch;
        i++;
    }
    printf("Original Number/String: %s\n", s);
    printf("Reverse Number/String: ");
    while (--i >= 0)
    {
        putchar(s[i]);
    }
    return 0;
}