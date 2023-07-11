Running a c program with multiple files

1st option
gcc -o app start.c lib.c
./app


start.c , lib.c  are the program files
app is the executable file 

2nd Option
make filename
./filename


3rd Option
cc filename.c
./a.out

4th option when using libraries add -lm
gcc -o app start.c lib.c -lm
./app


start.c , lib.c  are the program files
app is the executable file 