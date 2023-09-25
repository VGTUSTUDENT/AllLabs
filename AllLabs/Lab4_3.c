#include <stdio.h>
#include <locale.h>

void Lab4_3() {
    setlocale(LC_ALL, "RU");
    int N;
    printf("Введите трехзначное число: ");
    scanf("%d", &N);
    int lastDigit = N % 10;
    int firstDigit = N / 100;
    int secondDigit = (N / 10) % 10;
    int sum = firstDigit + secondDigit + lastDigit;
    printf("a) Последняя цифра числа: %d\n", lastDigit);
    printf("b) Первая цифра числа: %d\n", firstDigit);
    printf("c) Сумма цифр числа: %d\n", sum);
    printf("Число наоборот: %d\n", lastDigit * 100 + secondDigit * 10 + firstDigit);

}