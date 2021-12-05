#include <stdio.h>

#include "IO.h"

#define MAX_SIZE 100

void out_req(int* a, int i, int len) {
	printf("%d ", a[i]);
	if (i < len - 1) out_req(a, i + 1, len);
}


int main() {
	int a[MAX_SIZE];
	int len_arr = 10;

	input(a, len_arr);
	out_req(a, 0, len_arr);

	return 0;
}



//void swap(int* a, int* b) {
//	int mem = *a;
//	a = b;
//	*b = mem;
//}