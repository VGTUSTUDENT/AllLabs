#include <stdio.h>
#include <locale.h>
void Lab6_3() {
    setlocale(LC_ALL, "RU");
    int num1, num2;
    printf("������� ������ �����: ");
    scanf("%d", &num1);
    printf("������� ������ �����: ");
    scanf("%d", &num2);
    if (num2 != 0 && num1 % num2 == 0) {
        printf("��\n");
    }
    else {
        printf("���\n");
    }
}