#include <stdio.h>
#include <math.h>

void point_and_line() {
	float x1, x2, x3, y1, y2, y3;
	float y, k, b;

	printf("x1, y1: ");
	scanf_s("%f %f", &x1, &y1);
	printf("x2, y2: ");
	scanf_s("%f %f", &x2, &y2);
	printf("x3, y3: ");
	scanf_s("%f %f", &x3, &y3);

	k = (y1 - y2) / (x1 - x2);
	b = y1 - k * x1;
	y = k * x3 + b;
	if (y == y3) {
		printf("Yes");
	}
	else {
		printf("No");
	}
};


void points_and_band() {
	float k, b, width;
	printf("entar the params of the band:");
	printf("y = k*x + b");
	printf("\nk, b: ");
	scanf_s("%f %f", &k, &b);
	printf("width by y: ");
	scanf_s("%f", &width);
	
	float x0, y0;
	printf("enter the params of the point:");
	printf("x, y: ");
	scanf_s("%f %f", &x0, &y0);
	
	float x1, x2;
	x1 = (y0 - b)/k;
	x2 = (y0 - (b - width)) / k;

	if (x0 >= x1 && x0 <= x2) {
		printf("Yes");
	}
	else {
		printf("No");
	}

};


int main() {
	/*point_and_line();*/
	points_and_band();

}
