#include "find.h"
#include <stdlib.h>

bool find(int digit, int a[], int len_a) {
	a[len_a - 1] = digit;
	int i = 0;
	while (a[i] != digit) {
		i++;
	}

	if (i == len_a - 1) {
		return false;
	}
	else {
		return true;
	}

	exit(2);
}