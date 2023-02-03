#include <stdio.h>
int main()
{
    printf("short int is %2ld bytes \n", sizeof(short int));
    printf("int is %2ld bytes \n", sizeof(int));
    printf("int * is %2ld bytes \n", sizeof(int *));
    printf("long int is %2ld bytes \n", sizeof(long int));
    printf("long int * is %2ld bytes \n", sizeof(long int *));
    printf("signed int is %2ld bytes \n", sizeof(signed int));
    printf("unsigned int is %2ld bytes \n", sizeof(unsigned int));
    printf("\n");
    printf("float is %2ld bytes \n", sizeof(float));
    printf("float * is %2ld bytes \n", sizeof(float *));
    printf("double is %2ld bytes \n", sizeof(double));
    printf("double * is %2ld bytes \n", sizeof(double *));
    printf("long double is %2ld bytes \n", sizeof(long double));
    printf("\n");
    printf("signed char is %2ld bytes \n", sizeof(signed char));
    printf("char is %2ld bytes \n", sizeof(char));
    printf("char * is %2ld bytes \n", sizeof(char *));
    printf("unsigned char is %2ld bytes \n", sizeof(unsigned char));
    return 0;
}
