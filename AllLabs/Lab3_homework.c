#include <stdio.h>
#include <locale.h>
#define lightYear 63241.077

void Lab3_homework() {

	setlocale(LC_ALL, "RU");
    double years;
    printf("Введите число световых лет: ");
    scanf("%lf", &years);

    double astronomicalUnits = years * lightYear;

    // Выводим результат
    printf("%.2lf световых лет равно %.2lf астрономических единиц\n", years, astronomicalUnits);

}