#include <stdio.h>
#include <locale.h>

void Lab3_1() {

	setlocale(LC_ALL, "RU");
	int num;
	int num1;
	puts("������� �����:\n");
	scanf("%d", &num);
	printf("������� ��������: %d\n", num);
	puts("������� �����:\n");
	scanf("%d", &num1);
	printf("������� ��������: %d\n", num1);
	printf("�����: %d\n", num + num1);
	printf("��������: %d\n", num - num1);
	printf("������������: %d\n", num * num1);
	printf("�������: %.3lf\n", (double)num / num1);
	printf("�������: %d", num % num1);

}