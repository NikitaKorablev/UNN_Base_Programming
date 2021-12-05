#include <stdio.h>
#include "IO.h"
#include "calc.h"

int main() {
	double a, b, c, P, S;

	input(&a, &b, &c);
	calc(a, b, c, P, S);
	out(P, S);
}


