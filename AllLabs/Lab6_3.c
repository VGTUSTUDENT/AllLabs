#include <stdio.h>
#include <locale.h>
void Lab6_3() {
    setlocale(LC_ALL, "RU");
    int num1, num2;
    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);
    if (num2 != 0 && num1 % num2 == 0) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
}