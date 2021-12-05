#include "IO.h"
#include <stdio.h>

void out(int arr[], int len_arr) {
	for (int i = 0; i < len_arr; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


