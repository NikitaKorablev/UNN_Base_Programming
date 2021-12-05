#include "calc.h"
#include "find.h"
#include "IO.h"

#include <stdio.h>
#include <stdlib.h>
//using namespace std;

int random(int arr[], int len_arr) {
	int magic_number, i = 0;
	while (i < len_arr)
	{
		magic_number = rand() % 30 + 1;
		if (!find(magic_number, arr, len_arr)) {
			arr[i] = magic_number;
			i++;
		}
	}
	return *arr;
}

int main() {
	int len_a, len_b;
	
	printf("please enter length of array <= 30\n\n");

	printf("length of the first array: ");
	scanf("%d", &len_a);

	printf("length of the second array: ");
	scanf("%d", &len_b);

	int* a = new int[len_a], * b = new int[len_b];

	*a = random(a, len_a);
	*b = random(b, len_b);

	printf("array a:\n");
	out(a, len_a);

	printf("array b\n");
	out(b, len_b);

	calc(a, len_a, b, len_b);


	return 0;
}

