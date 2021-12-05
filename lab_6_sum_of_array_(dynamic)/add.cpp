#include <stdlib.h>
#include <stdio.h>
#include "add.h"

int* add(int old_array[], int* len, int num) {
	//printf("%d\n", num);
	*len += 1;
	old_array = (int*)realloc(old_array, *len * sizeof(int));

	if (old_array == NULL) exit(1);

	old_array[*len - 1] = num;

	return old_array;
}
