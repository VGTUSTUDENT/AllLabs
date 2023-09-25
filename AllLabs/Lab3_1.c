#include <stdio.h>
#include <locale.h>

void Lab3_1() {

	setlocale(LC_ALL, "RU");
	int num;
	int num1;
	puts("Введите число:\n");
	scanf("%d", &num);
	printf("Введено значение: %d\n", num);
	puts("Введите число:\n");
	scanf("%d", &num1);
	printf("Введено значение: %d\n", num1);
	printf("Сумма: %d\n", num + num1);
	printf("Разность: %d\n", num - num1);
	printf("Произведение: %d\n", num * num1);
	printf("Частное: %.3lf\n", (double)num / num1);
	printf("Остаток: %d", num % num1);

}