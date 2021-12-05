#include "find.h"
#include <stdlib.h>

bool find(int digit, int a[], int len_a) {
	a[len_a] = digit;
	int i = 0;
	while (a[i] != digit) {
		i++;
	}

	if (i == len_a) {
		return false;
	}
	return true;
}