#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    system("chcp 1251");
    int salaries[18][12];

    srand(time(NULL));

    for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 12; j++) {
            salaries[i][j] = 1000 + rand() % 4001;
        }
    }

    int month, employee;
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    printf("Введите номер сотрудника (1-18): ");
    scanf("%d", &employee);

    if (month < 1 || month > 12 || employee < 1 || employee > 18) {
        printf("Неверный номер месяца или сотрудника.\n");
        return 1;
    }

    int salary = salaries[employee - 1][month - 1];

    printf("Зарплата сотрудника %d за месяц %d: %d\n", employee, month, salary);

    return 0;
}
