#include "fm_sort.h"

#include <stdio.h>

void fm_sort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int min = arr[i], index = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < min) {
				min = arr[j];
				index = j;
			}
		}
		int k = arr[i];
		arr[i] = arr[index];
		arr[index] = k;
	}
}
