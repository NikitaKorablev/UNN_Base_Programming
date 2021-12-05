#include <stdio.h>
#include <math.h>
#include <vector>
#include <iostream>
#include "fun.h"
using namespace std;

int find(vector<vector<double>>& array, double *n) {
	size_t i;

	for (i = 0; i < array[0].size(); i++) {
		if (array[0][i] > *n) {
			return i - 1;
		}
	}
	return -1;
}

void calc(vector<vector<double>>& arr, double *n, int *ind, long double *x) {

	*x /= arr[1][*ind];
	*n -= arr[0][*ind];
	*ind = find(arr, n);

	if (*n > 0) {
		calc(arr, n, ind, x);
	}
}

void hard_pow() {
	double a, n;
	printf("enter the number: ");
	scanf_s("%lf", &a);
	printf("enter the degree of the number: ");
	scanf_s("%lf", &n);

	long double x = 1;
	if (n == 0) {
		printf("%.0lf", x);
	}
	else {
		vector<vector<double>> arr(2, vector<double>());
		int rate = 1;
		double b = a;
		while (rate < n) {
			arr[0].push_back(rate);
			arr[1].push_back(b);
			b *= b;
			rate *= 2;
		}

		x = 1;
		int k_pow = 0, ind = arr[0].size()-1;

		calc(arr, &n, &ind, &x);
		printf("x = %.4lf", 1 / x);
	}
};