#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int N = 12, K = 48;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", N * K);
	printf("�� �������� �������� %d ����� %d �����\n", 23 - N, 60 - K);
	printf("C 8.00 ������ %d ������\n", (N - 8) * 3600 + 48 * 60);
	printf("������� ��� = %0.1f ����� � ������� ������ = %0.1f ����\n", N / 24., K / 60.);
	return 0;
}
