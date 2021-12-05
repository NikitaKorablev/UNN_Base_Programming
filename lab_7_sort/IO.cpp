#include "IO.h"

#include <stdio.h>
#include <cstdlib>

void input(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 10 + 1;
	}
}

void out(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
