#include "calc.h"
#include "add.h"
#include "IO.h"
#include "find.h"

#include <stdlib.h>
#include <stdio.h>


void calc(int a[], int len_a, int b[], int len_b) {
	int* inter = NULL, *merge = NULL;
	int len_inter = 0, len_merge = 0;

	for (int i = 0; i < len_a; i++) {
		merge = add(merge, &len_merge, a[i]);
	}

	add(a, &len_a, 0);
	for (int i = 0; i < len_b; i++) {
		if (find(b[i], a, len_a)) {
			inter = add(inter, &len_inter, b[i]);
		}
		else {
			//printf("b = %d\n", b[i]);
			merge = add(merge, &len_merge, b[i]);
		}
	}

	printf("intersections array:\n");
	out(inter, len_inter);

	printf("merge array:\n");
	out(merge, len_merge);

	//array = add(array, &len, 9);



}