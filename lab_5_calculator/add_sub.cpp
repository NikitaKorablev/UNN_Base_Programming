#include "add_sub.h"

void add(double num, double& x) {
	x += num;
}

void minus(double num, double& x) {
	x -= num;
}

void sub(double num, double& x) {
	if (x == 0.0) {
		x = 1.0;
	}
	x *= num;
}