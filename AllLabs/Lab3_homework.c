#include <stdio.h>
#include <locale.h>
#define lightYear 63241.077

void Lab3_homework() {

	setlocale(LC_ALL, "RU");
    double years;
    printf("������� ����� �������� ���: ");
    scanf("%lf", &years);

    double astronomicalUnits = years * lightYear;

    // ������� ���������
    printf("%.2lf �������� ��� ����� %.2lf ��������������� ������\n", years, astronomicalUnits);

}