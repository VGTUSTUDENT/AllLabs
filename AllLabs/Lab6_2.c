#include <stdio.h>
#include <locale.h>

void Lab6_2() {
    setlocale(LC_ALL, "RU");
    double x;
    scanf("%lf", &x);
    printf("Значение F(%lf) = %lf ", x, (x > 3.6) ? 45 * x * x + 5 : 5 * x / (10 * x * x + 1));
}