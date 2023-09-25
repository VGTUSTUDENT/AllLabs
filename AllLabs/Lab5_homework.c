#include <stdio.h>
#include <math.h>
#include <locale.h>
#define e 2.718281828459045235360287471352662497757247093699959574966967
void Lab5_homework() {

	setlocale(LC_ALL, "RU");
	double x = 2.444;
	double y = 0.869 * 0.02;
	double z = -0.13 * 1000;
	double num1 = pow(x, y + 1) + pow(e, y - 1);
	double num2 = 1 + x * fabs(y - tan(z));
	double num3 = 1 + fabs(y - x);
	double num4 = pow(y - x, 2)/2;
	double num5 = pow(fabs(y - x), 3) / 3;
	printf("%lf", (num1 / num2)*num3 + num4 - num5);
}