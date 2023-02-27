#include<stdio.h>

int sum(int fnum, int snum);

void main()
{
    int answer = sum(78, 96);
    printf("The answer is %i \n",answer);
}

int sum(int fnum, int snum)
{
    int total = fnum + snum;
    printf("this is sum %i \n",total);
    
     
}