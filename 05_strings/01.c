#include <stdio.h>
// #include <stdlib.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    ch = getchar(); // getting one character from the keyboard

    printf("You have entered a character: ");
    putchar(ch); // Displaying one character

    printf("\n");

    return 0;
}