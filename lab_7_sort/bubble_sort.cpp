#include "bubble.h"

void bubble_sort(int arr[], int len) {
	bool flag = true;

	while (flag)
	{
		flag = false;
		for (int i = 0; i < len - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int k = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = k;
				flag = true;
			}
		}
	}
}