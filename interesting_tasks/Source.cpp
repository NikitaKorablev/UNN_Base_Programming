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
	printf("���������� ��������������� ����� : ");
	scanf_s("%d", &s);
	printf("���������� ���������: ");
	scanf_s("%d", &n);
	printf("���������� ���������: ");
	scanf_s("%d", &ex);
	printf("\n");


	
	int N;//����� �������������
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
	int stud = 0;//��������� �� ����������
	int sredstud = 0;//��������� �� ������� ����������
	int highstud = 0;//��������� � ������� ����������
	do {
		//������� ����� ��������������
		N = rand() % 100 + 10000;
		printf("%d   ", N);
		//������� ������ �� ��������
		for (i = 0; i < ex; i++) {
			z[i] = rand() % 4 + 2;
			printf("%d ", z[i]);
			//���������� ������� ������ ��������
			sum += z[i];
			sred = (float)sum / (float)ex;
		}
		printf("     ������� ������:%.1f", sred);
		sum = 0;


		//����������, ���� ������� ������ ��� �� ����
		int size = sizeof(z) / sizeof(int);
		i = 0;
		elem = 2;

		while (i < size) {
			if (z[i] == elem) 
				break;
				i++;
			}
		if (i == size) {
			printf("     ����");
			w += 1;
		}
		else {
			printf("     �� ����");
		}


			//���������� ��� ���������(��� ���������/�������/����������)
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
			printf("    ��������� ���");
		 }
		else {
			stud += 1;
			if (coef == 1) {
				printf("    ������� ���������");
				sredstud += 1;
			}
			else {
				printf("    ���������� ���������");
				highstud += 1;
			}
		}
	

		j++;
		printf("\n");




		//��������� ������ ������� ������
		for (i = 1; i <= ex; i++) {
			summ += z[i];
			l += 1;
		}
		


	} while (j < n);
	printf("\n");

	//����� ����� ������� ������
	osred = (float)summ / (float)l;
	printf("����� ������ ������: %.1f\n", osred);

	//���������� ���-�� ���������, ������� �������
	printf("\n");
	printf("��������� ����� �������: %d", w);




	
	return 0;
}


