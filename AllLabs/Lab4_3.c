#include <stdio.h>
#include <locale.h>

void Lab4_3() {
    setlocale(LC_ALL, "RU");
    int N;
    printf("������� ����������� �����: ");
    scanf("%d", &N);
    int lastDigit = N % 10;
    int firstDigit = N / 100;
    int secondDigit = (N / 10) % 10;
    int sum = firstDigit + secondDigit + lastDigit;
    printf("a) ��������� ����� �����: %d\n", lastDigit);
    printf("b) ������ ����� �����: %d\n", firstDigit);
    printf("c) ����� ���� �����: %d\n", sum);
    printf("����� ��������: %d\n", lastDigit * 100 + secondDigit * 10 + firstDigit);

}