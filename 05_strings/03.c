#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[81];
    printf("Enter a line of text:\n");
    fgets(str, sizeof(str), stdin);
    printf("You entered: ");
    puts(str);
}