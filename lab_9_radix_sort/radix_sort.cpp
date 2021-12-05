#include "radix_sort.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//using namespace std;

void filling(int* array) {
	for (int i = 0; i < 10; i++) {
		array[i] = -1;
	}
}

void out_new(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void copy(int* arr_1, int* arr_2, int len) { // from ..   to ..
	for (int i = 0; i < len; i++) {
		arr_2[i] = arr_1[i];
	}
}

void radix_sort(int* array, int len) {
	int* start = (int*)malloc(10 * sizeof(int));
	int* end = (int*)malloc(10 * sizeof(int));
	int* index = (int*)malloc(len * sizeof(int));
	int* new_array = (int*)malloc(len * sizeof(int));

	int radix = 1, h = 1;

	bool flag = true;
	while(flag)
	{
		filling(start);
		filling(end);

		int tmp, k = 0, mem;
		for (int i = 0; i < len; i++) {
			radix == 1 ? tmp = array[i] % 10 : tmp = ((int)(array[i] / radix)) % 10;
			if (start[tmp] < 0) {
				start[tmp] = i; end[tmp] = i;
				index[k] = i; k++;
			}
			else {
				mem = index[end[tmp]];
				index[end[tmp]] = i;
				index[k] = mem; k++; end[tmp] = i;
			}
		}
		radix *= 10;

		int ind; k = 0;
		flag = false;
		
		for (int i = 0; i < 10; i++) {
			if (start[i] != -1) {
				ind = start[i];
				do
				{
					if (!flag && k > 0) {
						if (new_array[k - 1] > new_array[k]) {
							flag = true;
						}
						else {
							flag = false;
						}
					}
					
					new_array[k] = array[ind];
					ind = index[ind];
					k++;
				} while (ind != start[i]);
			}
		}

		copy(new_array, array, len);

		h++;
		if (h > 5) {
			printf("Error: index out of range");
			break;
		}
	}
	free(start);
	free(end);
	free(index);
	free(new_array);
}



