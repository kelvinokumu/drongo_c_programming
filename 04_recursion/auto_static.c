#include <stdio.h>
void fun();

int main()
{
    int loop;
    
    //calling function 10 times
    for(loop=0; loop<5; loop++)
        fun();
	
	return 0;
}

void fun()
{
    auto int a=0;
    static int b=0;
    
    printf("a = %d, b = %d\n",a,b);
    
    a++;
    b++;
}


