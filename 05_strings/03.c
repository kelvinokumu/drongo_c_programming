#include <stdio.h>
// #include <stdlib.h>

int main()
{
    // printf("Enter your name \n");
    // char name[10];
    // scanf("%s",name); // recieve a string
    // printf("Your name is %s \n",name);

    char str[30];
    
    printf("Enter a line of text:\n");
    
    fgets(str, sizeof(str), stdin);
    printf("You entered: ");
    puts(str);

}