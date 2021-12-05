//#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

#include "IO.h"
#include "find.h"
#define MAX_SIZE 100

void random(int arr[], int len_arr) {
	srand(time(NULL));
	int magic_number, i = 0;
	while (i < len_arr)
	{
		magic_number = rand() % 30 + 1;
		if (!find(magic_number, arr, len_arr)) {
			arr[i] = magic_number;
			i++;
		}
	}
}

int main() {
	int a[MAX_SIZE], b[MAX_SIZE];
	int inter[MAX_SIZE], merge[MAX_SIZE];
	int len_inter = 0, len_merge = 0;
	int len_a, len_b;

	printf("please enter length of array <= 30\n\n");

	printf("length of the first array: ");
	scanf("%d", &len_a);

	printf("length of the second array: ");
	scanf("%d", &len_b);

	random(a, len_a);
	random(b, len_b);

	printf("array a:\n");
	out(a, len_a);

	printf("array b\n");
	out(b, len_b);

	for (int i = 0; i < len_a; i++) {
		merge[i] = a[i];
	}
	len_merge = len_a;
	
	int i = 0;
	while (i < len_b) {
		if (find(b[i], a, len_a)) {
			inter[len_inter] = b[i];
			len_inter++; i++;
		}
		else {
			merge[len_merge] = b[i];
			len_merge++; i++;
		}
	}

	printf("intersections array:\n");
	out(inter, len_inter);

	printf("merge array:\n");
	out(merge, len_merge);

	return 0;
}