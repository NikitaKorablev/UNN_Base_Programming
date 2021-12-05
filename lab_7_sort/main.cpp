#include "IO.h"
#include "bubble.h"
#include "fm_sort.h"
#include "sort_by_inserts.h"
#include "counting_sort.h"
#include "double_sort.h"

#include <stdio.h>
#include <cstdlib>
#include <time.h>

#define MAX_LEN 100

int main() {
	srand(time(NULL));
	int a[MAX_LEN];
	int b[MAX_LEN];

	// сортировка пузырьком
	input(a, 5);
	out(a, 5);

	bubble_sort(a, 5);
	out(a, 5);

	// сотировка поиском минимального значения
	printf("\n");
	input(a, 10);
	out(a, 10);

	fm_sort(a, 10);
	out(a, 10);

	// сортировка вставками
	printf("\n");
	input(a, 6);
	out(a, 6);

	inserts(a, 6);
	out(a, 6);

	// сортировка подсчётом
	printf("\n");
	input(a, 8);
	out(a, 8);

	counting_sort(a, 8);
	out(a, 8);

	// сортировка двумерного массива
	//		(второй столбец по убыванию)

	int len_arr = 5;

	printf("\n");
	input(a, len_arr);
	printf("a: ");
	out(a, len_arr);

	input(b, len_arr);
	printf("b: ");
	out(b, len_arr);

	double_sort(a, b, len_arr);

	printf("\n");
	out(a, len_arr);
	out(b, len_arr);

	return 0;
}