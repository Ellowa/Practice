/**
* @file   Practice.c
* @author ������ �.�., ��. 515
* @date   23.06.2019
*
* ��������.
*/
#include <stdio.h>
#include < Windows.h > //����� ��� ��������� �������� �����
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>
/**
* ������ �� ������ ���������(����� �������������� � �������� �����)
*
* @param *str1 - ������(������� ��� ������������), a1 - ����� ������
*/
void anograma(char* str1, int a1) {

	srand((unsigned)time(NULL));
	int mas[20];
	for (int q = 0; 19 >= q; q++) {
		mas[q] = -10;
	}
	int b;
	int c;
	int d = -2;
	int z = -1;
	int r;
	int m = 0;
	for (b = 0; a1 >= b; b++) {
		c = d + 2;

		if ((str1[b] == ' ') || (b == a1)) {
			z = -1;
			d = b - 1;
			for (int k = 0; 100 > k; k++) {
				r = rand() % (d - c + 1) + c;
				for (int l = 0; 19 >= l; l++) {
					if (mas[l] == r) {
						m = 1;
						break;
					}
					m = 0;
				}
				if (m == 0) {
					z++;
					mas[z] = r;

					printf("%c", str1[r]);
				}

			}
			printf(" ");
		}
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	SetConsoleCP(1251); //����� ��� ��������� �������� �����
	SetConsoleOutputCP(1251); //����� ��� ��������� �������� �����
	char str2[100];
	printf("Input string: \n");
	gets(str2);
	a = strlen(str2);
	printf("Anagram: ");
	anograma(str2, a);
	printf("\n");
	getchar();
	return 0;
}