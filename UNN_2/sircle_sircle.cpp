#include <stdio.h>
#include <math.h>

int main () {

	float x1, y1, r1;
	float x2, y2, r2;
	printf("enter params of the first sircle(x, y, r): ");
	scanf_s("%f %f %f", &x1, &y1, &r1);
	printf("\nenter params of the second sircle(x, y, r): ");
	scanf_s("%f %f %f", &x2, &y2, &r2);

	int count = 0;
	float a, b;
	a = x2 - x1;
	b = y2 - y1;
	float d = sqrtf(a*a + b*b);

	if (x1 == x2 && y1 == y2) {
		if (r1 < r2 || r1 > r2) {
			count = 0;
		}
		else if (r1 == r2) {
			count = -1;
		}
	}
	else if (d == r1 + r2) {
		count = 1;
	}
	else if (d > r1 + r2) {
		count = 0;
	}
	else if (d < r1 + r2) {
		count = 2;
	}

	printf("\nCount of point: ");
	printf("%d", count);
	return 0;
}
