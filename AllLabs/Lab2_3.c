#include <stdio.h>
#include <locale.h>

void Lab2_3() {

    // ������� 15
    setlocale(LC_ALL, "RU");
    int n = 4;
    int L = 13333;
    printf("����:\n");
    printf("%20d\n", n);
    printf("%20d\n", L);
    printf("%26.12s\n", "________________________________");
    printf("�����:\n");
    printf("%14s%+012.6lf\n", " ", (double)n / L);
}