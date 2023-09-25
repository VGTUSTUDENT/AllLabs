#include <stdio.h>
#include <locale.h>

void Lab3_3() {

	setlocale(LC_ALL, "RU");
	int a;
	int b;

	puts("¬ведите число:\n");
	scanf("%d", &a);
	puts("¬ведите число:\n");
	scanf("%d", &b);
	puts("_________________________\n");
	puts("| a * b | a + b | a - b |\n");
	puts("_________________________\n");
	printf("| %d * %d | %d + %d | %d - %d |\n",a,b,a,b,a,b);
	puts("_________________________\n");
	printf("|  %d   |   %d   |   %d  |", a*b, a+b, a-b);

}