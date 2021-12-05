#include <stdio.h>
#include "IO.h"

void input(int* a, double* num) {
	scanf_s("%d %lf", a, num);
}

void out(double& x) {
	printf("%.lf\n", x);
}


