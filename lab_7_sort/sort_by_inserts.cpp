#include "sort_by_inserts.h"

void inserts(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		int copy = arr[i], j = i - 1;
		while (j >= 0 && arr[j] > copy)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = copy;
	}
}