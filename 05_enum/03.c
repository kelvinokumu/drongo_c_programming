
#include <stdio.h>

// declaration on enum
typedef enum
{
    BOLD = 1,
    ITALIC = 2,
    UNDERLINE = 3
}textEditor;

int main()
{
    // Initializing enum variable
    textEditor feature = ITALIC;

    switch (feature)
    {
    case 1:
        printf("It is BOLD");
        break;

    case 2:
        printf("It is ITALIC");
        break;

    case 3:
        printf("It is UNDERLINE");
    }

    return 0;
}
