#include "counting_sort.h"

#define MAX_SIZE 100

void counting_sort(int arr[], int len) {
	int b[MAX_SIZE];
	int min = arr[0], max = arr[0];
	for (int i = 0; i < len; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		else if (arr[i] > max) {
			max = arr[i];
		}
	}

	for (int i = 0; i < (max - min) + 1; i++) {
		b[i] = 0;
	}
	for (int i = 0; i < len; i++) {
		b[arr[i] - min]++;
	}
	int k = 0;
	for (int i = 0; i < (max - min) + 1; i++) {
		for (int j = 0; j < b[i]; j++) {
			arr[k] = i + min;
			k++;
		}
	}
}