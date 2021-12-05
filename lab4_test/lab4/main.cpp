#include <stdio.h>
#include <math.h>
#include "fun.h"

void summa() {
	double b, q, n, summa;
	scanf_s("%lf %lf %lf", &b, &q, &n);
	summa = b * (1 - pow(q, n)) / (1 - q);
	printf("summ = %lf\n", summa);
	summa = 0;
	for (int i = 0; i <= n - 1; i++) {
		summa += b * pow(q, i);
	}
	printf("summ2 = %lf", summa);

}

void sinus() {
	double n, x, res, facktorial, up;
	scanf_s("%lf %lf", &n, &x);
	res = x;
	up = x;
	if (n == 1) printf("%lf", res -= x * x * x / 6);
	if (n == 2) printf("%lf", res += x * x * x*x*x / 120);
	facktorial = 1;
	for (int i = 3; i <= n; i += 2 ) {
		facktorial *= (i + 1) * (i + 2) * (i + 3) * (i + 4);
		up *= x * x * x * x;
		res -= up / facktorial;
	}
	printf("%lf\n", res);
	printf("%lf", sin(x));
}

void input(double *a, double *b, double *c) {
	scanf_s("%lf %lf %lf", a, b, c);
}

void ploshad(double a, double b, double c, double *S, double *P) {
	*P = a + b + c;
	double p = *P / 2.0;
	*S = sqrt(p * (p - a) * (p - b) * (p - c));
}

void output(double P, double S) {
	printf("%0.lf %0.lf", P, S);
}

int main() {
	double a, b, c, S, P;
	input(&a, &b, &c);
	ploshad(a, b, c, &S, &P);
	output(P, S);
	return 0;
}