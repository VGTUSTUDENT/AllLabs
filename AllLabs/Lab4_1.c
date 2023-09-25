#include <stdio.h>
#include <locale.h>

void Lab4_1() {

	setlocale(LC_ALL, "RU");
	char c;
	int i;
	float f;
	double d;
	puts("������� ������:");
	scanf(" %c", &c);
	puts("������� ����� �����:");
	scanf("%d", &i);
	puts("������� ����� � ��������� ������:");
	scanf("%f", &f);
	puts("������� ������������ �����:");
	scanf("%lf", &d);
	printf("%c %d %.3lf %.3lg\n", c, i, f, d);
	printf("�������� ���������� c: %c\n", c);
	printf("�������� ���������� i: %d\n", i);
	printf("�������� ���������� f: %.2f\n", f);
	printf("�������� ���������� d: %.10lf\n", d);

	// 1�
	long long intPart = (long long)f;
	double fractionalPart = f - intPart;
	printf("����� �����: %lld\n", intPart);
	printf("������� �����: %.2lf\n", fractionalPart);

	// 1�
	printf("����������������� ���: %x\n", c);
	printf("���������� ���: %d\n", c);

	// 1�
	if (i == 0) {
		printf("������� �� ����\n");
	}
	else {
		printf("���������: %.2lf\n", (double)1.0 / i);
	}
}