#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

#define MAX_SIZE 100




int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int s, n, ex;
	printf("Количество стипендиального фонда : ");
	scanf_s("%d", &s);
	printf("Количество студентов: ");
	scanf_s("%d", &n);
	printf("Количество экзаменов: ");
	scanf_s("%d", &ex);
	printf("\n");


	
	int N;//номер студенческого
	int z[MAX_SIZE];
	int i, j;
	int  elem;
	float sred;
	float osred;
	int sum = 0;
	j = 0;
	int summ = 0;
	int l = 0;
	int w = 0;
	int coef;
	int stud = 0;//студентов со стипендией
	int sredstud = 0;//студентов со средней стипендией
	int highstud = 0;//студентов с высокой стипендией
	do {
		//выводим номер студентческого
		N = rand() % 100 + 10000;
		printf("%d   ", N);
		//выводим оценки за экзамены
		for (i = 0; i < ex; i++) {
			z[i] = rand() % 4 + 2;
			printf("%d ", z[i]);
			//определяем среднюю оценку студента
			sum += z[i];
			sred = (float)sum / (float)ex;
		}
		printf("     Средняя оценка:%.1f", sred);
		sum = 0;


		//определяем, сдал студент сессию или не сдал
		int size = sizeof(z) / sizeof(int);
		i = 0;
		elem = 2;

		while (i < size) {
			if (z[i] == elem) 
				break;
				i++;
			}
		if (i == size) {
			printf("     СДАЛ");
			w += 1;
		}
		else {
			printf("     НЕ СДАЛ");
		}


			//определяем вид степендии(нет степендии/обычная/повышенная)
		for (i = 0; i < ex; i++) {
			if ((z[i] == 2) || (z[i] == 3)) {
				coef = 0;
				break;
			}
			else if (z[i] == 4) {
				coef = 1;
			}
			else if (z[i] == 5) {
				coef = 2;
			//printf("%d", coef);
			}
	   }


		if (coef == 0) {
			printf("    Стипендии нет");
		 }
		else {
			stud += 1;
			if (coef == 1) {
				printf("    Обычная стипендия");
				sredstud += 1;
			}
			else {
				printf("    Повышенная стипендия");
				highstud += 1;
			}
		}
	

		j++;
		printf("\n");




		//вычисляем общуюю среднюю оценку
		for (i = 1; i <= ex; i++) {
			summ += z[i];
			l += 1;
		}
		


	} while (j < n);
	printf("\n");

	//вывод общей средней оценки
	osred = (float)summ / (float)l;
	printf("Общая средня оценка: %.1f\n", osred);

	//определяем кол-во студентов, сдавших экзамен
	printf("\n");
	printf("Студентов сдало экзамен: %d", w);




	
	return 0;
}


