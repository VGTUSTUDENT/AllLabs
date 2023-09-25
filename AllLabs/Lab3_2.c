#include <stdio.h>
#include <locale.h>
#define D 2.54

void Lab3_2() {

	setlocale(LC_ALL, "RU");
	int dym;
	float result;

	puts("¬ведите число:\n");
	scanf("%d", &dym);
	printf("¬ведено значение: %d\n", dym);
	result = dym * D;
	printf("%d английских дюймов Ц это % .1f см\n", dym, result);
	printf("%d литовских дюймов Ц это % .1f см", dym, (float)dym * 2.7076);

}