#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int find(int* a, int N, int num) {
	a[N] = num;
	int i = 0;
	while (a[i] != num){
		i++;
	}

	if (i == N) {
		return -1;
	}
	else {
		return i;
	}
}

void input(int* a, int N) {
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 10;
	}
}

void out(int* a, int N) {
	for (int i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main() {
	int a[MAX_SIZE];
	int N;
	int num;

	printf("enter len a: ");
	scanf("%d", &N);

	input(a, N);
	out(a, N);

	printf("enter element value: ");
	scanf("%d", &num);
	printf("%d", find(a, N, num));

	return 0;
}




