#include <math.h>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void geom_prog() {
	int b, q, n;
	printf("enter b_0, q, n: ");
	scanf_s("%d %d %d", &b, &q, &n);

	int s_1 = b, i;
	int b_test = b;

	for (i = 0; i < n - 1; i++) {
		b_test = b_test * q;
		//printf("%d", b);
		s_1 += b_test;
	}
	//printf("%d", s_1);
	//printf("\n");

	float s_2 = 0;
	float b_n;

	b_n = b * powf(q, n - 1);
	//printf("%f", b_n);
	s_2 = (b_n * q - b) / (q - 1);
	if (s_1 == s_2) {
		printf("%d", s_1);
	}
	else {
		printf("0");
	}
}

void sin() {
	double f, sum = 0, x, i;
	printf("Enter X: ");
	scanf_s("%lf", &x);
	sum = x;
	f = x;
	for (i = 1; i <= 20; i++) {
		f *= -(x*x) / (2 * i * (2 * i + 1));
		sum += f;
	}
	printf("sin x = %lf\n", sum);

}

int main() {
	//geom_prog();
	//sin();
	//dynamic_array();
	sin();

	return 0;
}

