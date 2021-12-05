#include <stdio.h>
#include "IO.h"

void input(int* a, int* b) {
	printf("Enter a and b");
	
	scanf_s("%d %d", a, b);
};

void out(int a, int b, int c) {
	printf("%d = %d + %d", c, a, b);
};



