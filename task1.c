#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "rus");
	int num1;
	puts("Введите число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);

	puts("Введите число");
	int num;
	scanf("%d", &num);

	printf("Сумма чисел %d и %d равна %d\n", num, num1, num + num1);
	printf("Разность чисел %d и %d равна %d\n", num, num1, num - num1);
	printf("Произведение чисел %d и %d равно %d\n", num, num1, num * num1);
	printf("Частное чисел %d и %d равно %d\n", num, num1, num/num1);
	printf("Остаток от деления числа %d на %d равен %d\n", num, num1, num % num1);

	return 0;
}	