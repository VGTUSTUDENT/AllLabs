#include <stdio.h>
#include <locale.h>

void Lab2_2() {

    setlocale(LC_ALL, "RU");
    int N = 16;
    int K = 37;
    printf("Сейчас %d часов %d минут 00 секунд\n",N, K);
    printf("Идет %d минута суток\n",K+N*60);
    printf("До полуночи осталось %d часов и %d минут\n",24-N, 60-K);
    printf("С 8.00 прошло %d секунд\n", 60 * 60*(N - 8) + K*60);
    printf("Текущий час = %d/24 суток и текущая минута = %d/60 часа\n",N,K);
}