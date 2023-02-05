#include <stdio.h>

int fibonacci(int i);

int main()
{

   int i;

   for (i = 0; i < 10; i++)
   {
      printf("%d\t\n", fibonacci(i));
   }

   return 0;
}

int fibonacci(int i)
{

   if (i == 0)
   {
      return 0;
   }

   if (i == 1)
   {
      return 1;
   }
   return fibonacci(i - 1) + fibonacci(i - 2);
}

int fibonacci(int n)
{
   if (n < 0)
   {
      return 0;
   }
   else if (n <= 1)
   {
      return 1;
   }
   else
   {
      return fibonacci(n - 1) + fibonacci(n - 2);
   }
}