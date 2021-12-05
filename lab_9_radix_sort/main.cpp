#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "radix_sort.h"

void random(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 1000 + 1;
	}
}

void out(int* a, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main() {
	srand(time(NULL));
	int len = 7;
	int* a = (int*)malloc(len * sizeof(int));
	random(a, len);

	out(a, len);

	radix_sort(a, len);

	out(a, len);

	return 0;
}




