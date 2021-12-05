#include <stdlib.h>
#include <stdio.h>

#include "merge.h"

void merge(int* array, int start, int border, int end, int* a, int* b) {
	int len_a = border - start + 1;
	int len_b = end - border;

	//int* a = (int*)malloc(len_a * sizeof(int));
	//int* b = (int*)malloc(len_b * sizeof(int));
	//
	int k = 0;
	for (int i = start; i < start + len_a; i++) {
		a[k] = array[i];
		k++;
	}

	k = 0;
	for (int i = border + 1; i < border + 1 + len_b; i++) {
		b[k] = array[i];
		k++;
	}

	int i = 0, j = 0; k = start;
	while (i < len_a && j < len_b) {
		if (a[i] <= b[j]) {
			array[k] = a[i];
			i++; k++;
		}
		else {
			array[k] = b[j];
			j++; k++;
		}
	}
	while (i < len_a) {
		array[k] = a[i];
		i++;  k++;
	}
	while (j < len_b) {
		array[k] = b[j];
		j++; k++;
	}
}
