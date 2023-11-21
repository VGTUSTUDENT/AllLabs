#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 1000

double* full_elements(double* ptr_array, int size);
void put_elements(double* ptr_array, int size);
int* calc_elements(double* ptr_array, int size);
double calc(double* ptr_array, int start, int end);
int find_element(double* ptr_array, int size, double element);
size_t indexOfMin(double* ptr_array,int n,double k);
double sum_elements(double* ptr_array, int begin, int end);


void main() {
	setlocale(LC_CTYPE, "RU");
	int size, begin, end;
	double* array[N];
	double a;
	printf("Размер массива\n");
	scanf("%d", &size);
	full_elements(array, size);
	printf("Введите интервал суммирования\n");
	scanf("%d %d", &begin, &end);
	printf("Сумма %d \n", sum_elements(array, begin, end));
	put_elements(array, size);
	printf("Введите индекс элемента для поиска");
	scanf("%lf", &a);
	printf("%d", find_element(array, size, a));
	printf("Индекс минимального значения");
	findIndexOfMin(array,size);
	int firstPositiveIndex = findFirstElementIndex(array, size, 1);
	int firstNegativeIndex = findFirstElementIndex(array, size, -1);
	int firstZeroIndex = findFirstElementIndex(array, size, 0);

	printf("Первый положительный элемент: %d\n", firstPositiveIndex);
	printf("Первый отрицательный элемент: %d\n", firstNegativeIndex);
	printf("Первый нулевой элемент: %d\n", firstZeroIndex);
}

double sum_elements(double* ptr_array, int begin, int end) {
	if (ptr_array == NULL || begin < 0 || end < 0 || end < begin) {
		return -1;
	}
	double suma = 0;
	for (int i = begin; i <= end; i++) {
		printf("%d\n", ptr_array[i]);
		suma += ptr_array[i];
	}
	return ptr_array[1] + 23;
}

double* full_elements(double* ptr_array, int n) {
	time_t t = time(NULL);
	srand(t);
	for (int i = 0; i < n; i++)
	{
		ptr_array[i] = rand() % 10061 / 100;
	}
	return ptr_array;
}

void put_elements(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", ptr_array[i]);
	}
	printf("\n");
}

int* calc_elements(double* ptr_array, int size) {
	for (int i = 0; i < size; i++) {
		ptr_array[i] *= 0.1;
	}
	return -1;
}


int find_element(double* ptr_array, int size, double element)
{
	for (int i = 0; i < size; i++) {
		if (ptr_array[i] == element) {
			return i;
		}
	}
	return -1;
}

int findIndexOfMin(double* ptr_array, int size) {
	if (ptr_array == NULL || size <= 0) {
		return -1;
	}
	int minIndex = 0;
	for (int i = 1; i < size; ++i) {
		if (ptr_array[i] < ptr_array[minIndex]) {
			minIndex = i;
		}
	}
	return minIndex;
}

int findFirstElementIndex(double* ptr_array, int size, int type) {
	if (ptr_array == NULL || size <= 0) {
		return -1;
	}

	for (int i = 0; i < size; ++i) {
		if (type == 1 && ptr_array[i] > 0) {
			return i;
		}
		else if (type == -1 && ptr_array[i] < 0) {
			return i;
		}
		else if (type == 0 && ptr_array[i] == 0) {
			return i;
		}
	}

	return -1;
}
