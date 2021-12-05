#include <stdio.h>
#include "calc.h"

int main() {

	printf("press 1 for: '+'\n");
	printf("press 2 for: '-'\n");
	printf("press 3 for: '*'\n");

	int a = 0;
	double num = 0, x = 0;
	bool sw = true;

	while (sw) {
		sw = calc(a, num, x);
	}
	
	return 0;
}
