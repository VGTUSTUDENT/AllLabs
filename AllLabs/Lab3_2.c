#include <stdio.h>
#include <locale.h>
#define D 2.54

void Lab3_2() {

	setlocale(LC_ALL, "RU");
	int dym;
	float result;

	puts("������� �����:\n");
	scanf("%d", &dym);
	printf("������� ��������: %d\n", dym);
	result = dym * D;
	printf("%d ���������� ������ � ��� % .1f ��\n", dym, result);
	printf("%d ��������� ������ � ��� % .1f ��", dym, (float)dym * 2.7076);

}