#include <stdio.h>
#include <locale.h>

void Lab4_1() {

	setlocale(LC_ALL, "RU");
	char c;
	int i;
	float f;
	double d;
	puts("Введите символ:");
	scanf(" %c", &c);
	puts("Введите целое число:");
	scanf("%d", &i);
	puts("Введите число с плавающей точкой:");
	scanf("%f", &f);
	puts("Введите вещественное число:");
	scanf("%lf", &d);
	printf("%c %d %.3lf %.3lg\n", c, i, f, d);
	printf("Значение переменной c: %c\n", c);
	printf("Значение переменной i: %d\n", i);
	printf("Значение переменной f: %.2f\n", f);
	printf("Значение переменной d: %.10lf\n", d);

	// 1а
	long long intPart = (long long)f;
	double fractionalPart = f - intPart;
	printf("Целая часть: %lld\n", intPart);
	printf("Дробная часть: %.2lf\n", fractionalPart);

	// 1б
	printf("Шестнадцатеричный код: %x\n", c);
	printf("Десятичный код: %d\n", c);

	// 1в
	if (i == 0) {
		printf("Деление на нуль\n");
	}
	else {
		printf("Результат: %.2lf\n", (double)1.0 / i);
	}
}