#include <stdio.h>
#include <locale.h>

void Lab6_homework() {
    setlocale(LC_ALL, "RU");
    double x, y;
    printf("������� ���������� x: ");
    scanf("%lf", &x);
    printf("������� ���������� y: ");
    scanf("%lf", &y);
    if ((x >= 0) && (y >= 0) && (y >= -2 * x + 4) && (y <= 6 - x)) {
        printf("��\n");
    }
    else {
        printf("���\n");
    }
}