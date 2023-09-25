#include <stdio.h>
#include <locale.h>
void Lab6_1() {
    setlocale(LC_ALL, "RU");
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Год %d - високосный\n", year);
    }
    else {
        printf("Год %d - не високосный\n", year);
    }
}