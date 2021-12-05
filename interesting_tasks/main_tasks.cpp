#include <iostream>
#include <fstream>
#include "fun.h"
using namespace std;

void task1() {
	fstream folder;
	int data, a;
	int arr_data[16];
	folder.open("matrix.txt", fstream::in);

	if (folder.is_open()) {
		a = 0;
		while (!folder.eof()) {
			/*data = "";*/
			folder >> data;
			arr_data[a] = data;
			a += 1;
		}
	}

	int arr[4][4];
	int i, j, m;
	m = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][j] = arr_data[m];
			//printf("%d", arr[i][j]);
			m += 1;
		}
	}
	folder.close();

	int sum_main;
	sum_main = 0;
	for (i = 0; i < 4; i++) {
		sum_main += arr[i][i];
	}
	cout << "summa: " << sum_main << endl;

	int min_el, old_min;
	min_el = 1000000;
	m = 0;

	for (i = 0; i < 4; i++) {
		old_min = min_el;
		min_el = min(arr[1][i], min_el);
		if (old_min != min_el) {
			m = i;
		}
	}
	cout << "minimum element of the second line: " << min_el << endl;

	double p;
	p = 1;
	for (i = 0; i < 4; i++) {
		p *= (1 + sin(2 - arr[i][m]));
	}
	cout << "\nmultiply: " << p << endl;

	int a_oi[4];

	for (i = 0; i < 4; i++) {
		sum_main = 0;
		for (j = 0; j < 4; j++) {
			sum_main += arr[i][j];
		}
		a_oi[i] = sum_main;
		cout << a_oi[i] << " ";
	}
}

void task2() {
	float a1, b1, c1, a2, b2, c2, x, y;
	float d, h1, h2;
	float x0, y0;
	/*
	printf("enter a1, b1, c1\n");
	scanf("%lf%lf%lf", &a1, &b1, &c1);

	printf("enter a2, b2, c2\n");
	scanf("%lf%lf%lf", &a2, &b2, &c2);

	printf("enter x and y\n");
	scanf("%lf%lf", &x, &y);
	*/
	a1 = 3;
	b1 = -3;
	c1 = 0;
	a2 = 5;
	b2 = -5;
	c2 = -25;
	x = 1;
	y = -1;


	//взяла произвольную точку на прямой a1*x + b1*y + c1 = 0
	x0 = 1;
	y0 = (-a1 / b1) * x0 - c1 / b1;
	printf("y0 = %lf\n", y0);

	// расстояние между двумя прямыми равно расстоянию между произвольной точкой первой прямой и второй прямой
	d = fabsf(a2 * x0 + b2 * y0 + c2) / sqrtf(a2 * a2 + b2 * b2);// расстояние между двумя прямыми
	printf("d = %lf\n", d);


	h1 = fabsf(a1 * x + b1 * y + c1) / sqrtf(a1 * a1 + b1 * b1);//расстояние между точкой и прямой a1*x + b1*y + c1 = 0
	printf("h1 = %lf\n", h1);


	h2 = fabsf(a2 * x + b2 * y + c2) / sqrtf(a2 * a2 + b2 * b2);//расстояние между точкой и прямой a2*x + b2*y + c2 = 0
	printf("h2 = %lf\n", h2);

	cout << "h1 + h2 = " << h1 + h2 << endl;
	cout << "d = " << d << endl;
	cout << h1 + h2 - d << endl;

	if ((h1 + h2) - d == 0) {
		printf("yes");
	}
	else printf("no");

};

int main() {
	

	hard_pow();
	return 0;
}