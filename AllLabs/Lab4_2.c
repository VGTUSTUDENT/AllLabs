#include <stdio.h>
#include <locale.h>

void Lab4_2() {

	setlocale(LC_ALL, "RU");
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;   // a � b - int, ��������� - int
	y = a / b;   // a � b - int, ��������� - int
	z = a / b;   // a � b - int, ��������� - int
	printf("x = %d\n", x);
	printf("y = %f\n", y);
	printf("z = %lf\n", z);
	float result_float = (float)a / b;
	double result_double = (double)a / b;

	printf("��������� ���� float: %f\n", result_float);
	printf("��������� ���� double: %lf\n", result_double);
}