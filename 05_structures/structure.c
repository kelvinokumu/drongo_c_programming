struct structure_name {
    // body of structure
} variables;

struct Student {
    char name[50];
    int class;
    int roll_no;
} student1; // here 'student1' is a structure variable of type, Student.


struct Student
{
    char name[50];
    int class;
    int roll_no;
};

int main()
{
    //struct structure_name variable_name;

    struct Student a; // here a is the variable of type Student
    return 0;
}
