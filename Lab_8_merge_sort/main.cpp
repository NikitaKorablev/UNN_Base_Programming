#include <cstdlib>
#include <time.h>
#include <stdio.h>

#include "IO.h"
#include "merge_sort.h"

#define MAX_ARR 100

//Напишите слияние упорядоченных массивов, используя цикл for и условный оператор if ровно по одному разу *

//void sort(int* a, int*b, int len_a, int len_b) {
//	for (int i = 0; i < len_a + len_b; i++) {
//
//	}
//}

//int a[5]{ 0, 2, 10, 11, 17 }, b[3]{ 1, 5, 7 };
//
//sort(a, b, 5, 3);

int main() {
	int a[MAX_ARR], len_a = 20;

	int* left = (int*)malloc(len_a * sizeof(int));
	int* right = (int*)malloc(len_a * sizeof(int));

	srand(time(NULL));

	input(a, len_a);

	out(a, len_a);

	merge_sort(a, 0, len_a-1, left, right); // массив, id начала массива, id конца массива
	out(a, len_a);

	free(left); free(right);

	return 0;
}

