#include <stdio.h>
#include <string.h>
 
int f1();
int f2();

union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {
   printf("Call first function \n");
   f1();
   printf("\n\n");
   printf("Call second function \n");
   f2();
   return 0;
}

int f1()
{
    union Data data;        

   data.i = 10;
   printf( "data.i : %d\n", data.i);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
}

int f2()
{
    union Data data;        

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
}

