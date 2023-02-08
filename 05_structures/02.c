#include <stdio.h>
#include <string.h>

typedef struct Student
{
  char name[50];
  int class;
  char section;
}Student;

int main()
{
   // created variable student1 for structure Student 
  Student student1 = {"Drongo" , 1, 'A'};
  Student student2 = {"College", 2, 'B'};
  
  // printing values 
  printf( "Student Name : %s\n", student1.name);
  printf( "Student Class : %d\n", student1.class);
  printf( "Student Section : %c\n", student1.section);

  // printing values 
  printf( "Student Name : %s\n", student2.name);
  printf( "Student Class : %d\n", student2.class);
  printf( "Student Section : %c\n", student2.section);
  
  return 0;
}
