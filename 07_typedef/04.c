#include <stdio.h>

#define AGE 18

int main() {
	#ifdef AGE
		printf("Age is %d", AGE);
	#else
		printf("Not Defined");
	#endif
	
	return 0;
}

