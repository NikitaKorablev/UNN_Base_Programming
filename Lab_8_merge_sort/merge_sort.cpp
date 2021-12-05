#include "merge.h"

#include <stdio.h>

void merge_sort(int* array, int start, int end, int* a, int* b) {
	if (start < end) {
		int border = start + ((end - start) / 2);

		merge_sort(array, start, border, a, b);
		merge_sort(array, border + 1, end, a, b);

		merge(array, start, border, end, a, b);
	}
}
