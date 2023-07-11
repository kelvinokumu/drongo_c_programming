#include <stdio.h>

// switch (expression) {
//     case constant1:
//         // Code block executed if expression matches constant1
//         break;
//     case constant2:
//         // Code block executed if expression matches constant2
//         break;
//     // more cases...
//     default:
//         // Code block executed if expression does not match any of the above cases
//         break;
// }

int main() {
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);  
    // Notice the space before %c to consume any leading whitespace

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Average.\n");
            break;
        case 'D':
            printf("Pass.\n");
            break;
        case 'F':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

    return 0;
}
