#include <math.h>
#include "calc.h"

void calc(double a, double b, double c, double& P, double& S) {
	P = a + b + c;
	double p = P / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));
}
