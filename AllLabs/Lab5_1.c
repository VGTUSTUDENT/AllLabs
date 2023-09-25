#include <stdio.h>
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846

void Lab5_1() {
    setlocale(LC_ALL, "RU");
    double gr;
    double rad;
    double result;
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);
    rad = gr * M_PI / 180.0;
    result = sin(rad);
    printf("Синус угла %.2lf градусов = %.6lf\n", gr, result);

}