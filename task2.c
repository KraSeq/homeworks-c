#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int N = 12, K = 48;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * K);
	printf("До полуночи осталось %d часов %d минут\n", 23 - N, 60 - K);
	printf("C 8.00 прошло %d секунд\n", (N - 8) * 3600 + 48 * 60);
	printf("Текущий час = %0.1f суток и текущая минута = %0.1f часа\n", N / 24., K / 60.);
	return 0;
}
