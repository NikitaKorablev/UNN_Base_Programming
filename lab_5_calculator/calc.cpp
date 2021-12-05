#include <stdio.h>
#include "calc.h"
#include "add_sub.h"
#include "IO.h"

bool calc(int a, double num, double& x) {
	
	printf(">>> ");
	input(&a, &num);
	
	switch (a) {
	case 1:
		add(num, x);
		out(x);
		return true;
	case 2:
		minus(num, x);
		out(x);
		return true;
	case 3:
		sub(num, x);
		out(x);
		return true;
	default:
		return false;
	}

	return false;
}
