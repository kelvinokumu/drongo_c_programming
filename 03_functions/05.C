#include <stdio.h>

int get_sum(int a, int b);
char get_grade(char grade);

int main()
{
    printf("start main\n");
    int result = get_sum(15, 78);
    printf("%i \n",result);
    printf("stop  main\n");
    char something = get_grade('Z');
    printf("was returned %c \n",something);
}

int get_sum(int num1, int num2)
{
    printf("start get_sum\n");
    int answer = num1 + num2;
    return answer;
}

char get_grade(char grade)
{
    
    printf("inside function %c \n",grade);
    return grade;
}