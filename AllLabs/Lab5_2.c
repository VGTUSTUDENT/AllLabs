#include <stdio.h>
#include <math.h>
#include <locale.h>


void Lab5_2() {
    setlocale(LC_ALL, "RU");
    double p = 3.0;
    double a;
    double b;
    double x;
    double y;
    puts("¬ведите x:");
    scanf("%lf", &x);
    a = sqrt(p * x);
    b = p * pow(x, 2) + sqrt(a);
    y = pow(log(b * b),3) + a * x;
    printf("f(%lf) = %lf\n",x, y);
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
}