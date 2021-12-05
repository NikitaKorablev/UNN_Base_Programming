#include <stdio.h>
#include "IO.h"
#include "calc.h"

int main() {
	int a, b, c = 0;

	input(&a, &b);

	c = add(a, b);

	out(a, b, c);

	return 0;
}
