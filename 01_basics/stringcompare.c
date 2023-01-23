#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Drongo";  // string1
    char s2[20] = " drongo"; // string2
    //  comparing both the strings
    //   string 1 > string 2, Postitive integer
    //   string 1 < string 2, Negative
    //   string 1 == string 2, Zero
    int result = strcmp(s1, s2);
    if (result == 0)
    {
        printf("string 1 and string 2 are equal \n");
    }
    else if (result > 0)
    {
        printf("String 1 is greater than String 2 \n");
    }
    else
    {
        printf("String 1 is less than String 2 \n");
    }
}
