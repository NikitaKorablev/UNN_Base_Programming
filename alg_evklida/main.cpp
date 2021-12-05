#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("n: ");
	scanf_s("%d", &n);

	int f;

	if (n % 2 == 0) {
		f = (-1) * (n / 2);
	}
	else { 
		f = (-1) * (n - 1) / 2 + n;
	}

	printf("%d", f);

	return 0;
}
