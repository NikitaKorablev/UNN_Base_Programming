#include "double_sort.h"

#include <stdio.h>

void find_min_special(int* arr_1, int* arr_2, int len) {
	for (int i = 0; i < len - 1; i++) {
		int min = arr_1[i], index = i;
		for (int j = i + 1; j < len; j++) {
			if (arr_1[j] < min) {
				min = arr_1[j];
				index = j;
			}
		}
		int k = arr_1[i];
		arr_1[i] = arr_1[index];
		arr_1[index] = k;

		int m = arr_2[i];
		arr_2[i] = arr_2[index];
		arr_2[index] = m;
	}
}

void find_max(int* arr, int st, int len) {
	for (int i = st; i < len - 1; i++) {
		int min = arr[i], index = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] > min) {
				min = arr[j];
				index = j;
			}
		}
		int k = arr[i];
		arr[i] = arr[index];
		arr[index] = k;
	}
}

void double_sort(int* arr_1, int* arr_2, int len) {
	find_min_special(arr_1, arr_2, len);

	int count = 1;

	for (int i = 1; i < len; i++)    {
		if (arr_1[i - 1] == arr_1[i]) {
			count++;
		}
		else if (count > 1) {
			find_max(arr_2, i - count, i);
			count = 1;
		}
	}
}