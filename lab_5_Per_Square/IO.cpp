#include <stdio.h>
#include "IO.h"


void input(double* a, double* b, double* c) {
	printf("Enter a, b and c: ");

	scanf_s("%lf %lf %lf", a, b, c);
}


void out(double P, double S) {
	printf("per = %lf, s = %lf", P, S);
}

