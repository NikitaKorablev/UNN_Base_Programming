#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

bool find(int arr[], int len, int digit) {
	arr[len] = digit;

	int i = 0;
	while (arr[i] != digit)
	{
		i++;
	}

	if (i != len) {
		return true;
	}
	return false;
}

void random(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if ((time(NULL) - rand()) % 2) {
			arr[i] = 5; // 50%
		}
		else {
			if ((time(NULL) - rand()) % 2) {
				arr[i] = 5; // 25%
			}
			else {
				int magicNumber = (time(NULL) - rand()) % 25 + 1;
				if (1 <= magicNumber && magicNumber <= 15) {
					arr[i] = 4; // 15%
				}
				else {
					if ((time(NULL) - rand()) % 2 + 1) {
						arr[i] = 3; // 5%
					}
					else {
						arr[i] = (time(NULL) - rand()) % 2 + 1; // 5% 1 или 2
					}
				}
			}
		}
	}
}

void average(int raiting[], int n_less, int id) {
	double mark = 0;

	for (int i = 0; i < n_less; i++) {
		mark += raiting[i];
	}
	double sr = mark / n_less;
	printf("Средняя оценка студента номер %d = %.1lf\n", id + 1, mark / n_less);
}

int grading(int arr[], int len) {
	if (find(arr, len, 3) || find(arr, len, 2) || find(arr, len, 1)) {
		return 3;
	}
	else if (find(arr, len, 4)) {
		return 2;
	}
	else {
		return 1;
	}
}

void out(int** arr[], int max_i, int max_j) {
	for (int i = 0; i < max_i; i++) {
		printf("Оценки студента номер %d: ", i + 1);
		for (int j = 0; j < max_j; j++) {
			printf("%d ", *arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n_st, n_less, cash;

	printf("Введите количество студентов: ");
	scanf("%d", &n_st);

	printf("Введите количество экзаменов: ");
	scanf("%d", &n_less);

	printf("Введите стипендиальный бюджет: ");
	scanf("%d", &cash);

	int* st = (int*)malloc(sizeof(int) * n_st);
	int** raiting = (int**)malloc(sizeof(int*) * n_st);
	int* midle = (int*)malloc(sizeof(int) * n_st);

	for (int i = 0; i < n_st; i++) {
		raiting[i] = (int*)malloc((n_less + 1) * sizeof(int));
		random(raiting[i], n_less);
		printf("Оценки студента номер %d: ", i + 1);
		for (int j = 0; j < n_less; j++) {
			printf("%d ", raiting[i][j]);
		}
		printf("\n");
	}

	printf("\n1 - Средние оценки\n2 - Стипендии\n3 - stop\n\n");

	int flag = 0;
	while (flag != 3) {
		printf("enter mod: ");
		scanf("%d", &flag);
		printf("\n");
		if (flag == 1) {
			for (int i = 0; i < n_st; i++) {
				average(raiting[i], n_less, i);
			}
			printf("\n");
		}
		else if (flag == 2) {
			int mode_1 = 0, mode_2 = 0;

			for (int i = 0; i < n_st; i++) {
				int gr = grading(raiting[i], n_less);
				if (gr == 1) {
					mode_1 += 1; // отличники
				}
				else if (gr == 2) {
					mode_2 += 1; // хорошисты
				}
			}
			printf("Отличники: %d, Хорошисты: %d\n", mode_1, mode_2);
			
			if (!mode_1 && !mode_2) {
				printf("Стипендию никто не получит!\n");
			}
			else {
				int x = cash / (mode_2 + 2 * mode_1);
				if (mode_1 && !mode_2) {
					printf("Хорошистов нет!\nПовышенная стипендия = %d\n", 2 * x);
				}
				else if (!mode_1 && mode_2) {
					printf("Отличников нет!\nОбычная стипендия = %d\n", x);
				}
				else {
					printf("Повышенная стипендия = %d\nОбычная стипендия = %d\n", 2*x, x);
				}
			}
		}
	}

	free(st);
	free(midle);
	for (int i = 0; i < n_st; i++) {
		free(raiting[i]);
	}
	free(raiting);
	return 0;
}