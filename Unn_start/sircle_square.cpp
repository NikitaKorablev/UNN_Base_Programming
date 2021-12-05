#include <stdio.h>
#include <math.h>

void sirc_square (){
	float x0, y0, r;
	printf("____enter the params of sircle____");
	printf("\nx0, y0, r: ");
	scanf("%f %f %f", &x0, &y0, &r);

	float x1, y1, len;
	printf("\n____enter the params of square____");
	printf("\nupper left point of squear (x, y): ");
	scanf("%f %f", &x1, &y1);
	printf("len of one side: ");
	scanf("%f", &len);

	float x[2], y[2];
	x[0] = x1;
	x[1] = x[0] + len;
	
	y[0] = y1;
	y[1] = y[0] - len;

	const int size = 2;
	float count = 0, arr[size], a;

	for (int i = 0; i < size; i++) {
		a = (y[i] - y0);
		arr[0] = x0 + sqrtf(r * r - a * a);
		arr[1] = x0 - sqrtf(r * r - a * a);
		if (arr[0] == arr[1]) {
			if (arr[0] >= x[0] && arr[0] <= x[1]) {
				count += 1;
			}
		}
		else {
			if (arr[0] >= x[0] && arr[0] <= x[1]) {
				count += 1;
			}
			if (arr[1] >= x[0] && arr[1] <= x[1]) {
				count += 1;
			}
		}
		
		a = (x[i] - x0);
		arr[0] = y0 + sqrtf(r * r - a * a);
		arr[1] = y0 - sqrtf(r * r - a * a);

		if (arr[0] == arr[1]) {
			if (arr[0] > y[1] && arr[0] < y[0]) {
				count += 1;
			}
		}
		else {
			if (arr[0] > y[1] && arr[0] < y[0]) {
				count += 1;
			}
			if (arr[1] > x[0] && arr[1] < x[1]) {
				count += 1;
			}
		}
	}


	printf("\nCount of point: ");
	printf("%.2f", count);
	printf("\n");

};


int main(){
	/*
	float x1, y1, x2, y2, x3, y3;

	printf("x1, y1: ");
	scanf("%f %f", &x1, &y1);

	printf("x2, y2: ");
	scanf("%f %f", &x2, &y2);

	printf("x3, y3: ");
	scanf("%f %f", &x3, &y3);

	float S, P, p, a, b, c;
	a = sqrtf((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrtf((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	c = sqrtf((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	printf("%.2f %.2f %.2f", a, b, c);

	P = a + b + c;
	p = P / 2;
	S = sqrtf(p * (p - a) * (p - b) * (p - c));

	printf("\nP = ");
	printf("%.2f", P);

	printf("\nS = ");
	printf("%.2f", S);

	printf("\n\n");

	float m, cos;

	m = fmaxf(a, b);
	m = fmaxf(m, c);

	if (a == m) {
		cos = (b * b + c * c - a * a) / (2 * b * c);
	}
	else if (b == m) {
		cos = (a * a + c * c - b * b) / (2 * a * c);
	}
	else if (c == m) {
		cos = (b * b + a * a - c * c) / (2 * b * a);
	}
	
	printf("tryangle is: ");
	if (cos == 0) {
		printf("right");
	}
	else if (cos < 0) {
		printf("obtus");
	}
	else if (cos > 0) {
		printf("acute");
	}
	printf("\n");
	*/

	/*sirc_square();*/


	return 0;
}